#include "Engine.h"
#include "Logger.h"
#include <cassert>
#include <string>
#include "Clock.h"

HS::Engine& HS::Engine::instance()
{
	static Engine engine; 

	return engine;
}

HS::Engine::Engine(){}

void HS::Engine::Init(std::string_view title, int width, int height)
{
	logger_ =     new   Logger();
	world_ =      new   World(); 
	renderer_ =   new   Renderer(title, width, height); 
	controller_ = new   Controller();
	fps_ = 60.0f;
}

HS::Logger* HS::Engine::getLogger() const
{
	return logger_;
}

HS::Controller* HS::Engine::getController() const
{
	return controller_;
}

HS::World* HS::Engine::getWorld() const
{
	return world_;
}

HS::Renderer* HS::Engine::getRenderer() const
{
	return renderer_;
}

void HS::Engine::setIsEngineRunning(bool value)
{
	isEngineRunning_ = value;
}

bool HS::Engine::getIsEngineRunning() const
{
	return isEngineRunning_;
}

float HS::Engine::getFPS() const
{
	return fps_;
}

void HS::Engine::setFPS(float new_fps)
{
	fps_ = new_fps;
}

HS::Engine::~Engine()
{
	delete controller_;
	delete renderer_;
	delete world_; 
	delete logger_; 
	
}

void HS::Engine::Run()
{
	Clock clock{}; 
	isEngineRunning_ = true;
	while (isEngineRunning_) 
	{
		clock.start();
		controller_->pollInput(); 
		world_->update();
		world_->renderEntities();
		renderer_->swapBuffers();

		auto deltaTime = clock.delta(); 

		clock.sleepUntilNextFrame(fps_); 

		float actualFps = 1.0f / deltaTime.count();

		logger_->log(INFO, "FPS:" + std::to_string(actualFps)); 
	}
}


