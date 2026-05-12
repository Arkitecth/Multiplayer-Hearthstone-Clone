#include "Engine.h"
#include "Logger.h"
#include <cassert>
#include <chrono>
#include <ratio>
#include <string>
#include <thread>

HS::Engine& HS::Engine::instance()
{
	static Engine engine; 

	return engine;
}

HS::Engine::Engine()
{
	if (!isEngineRunning_) 
	{
		Init("Hearth Engine", 500, 500); 
		fps_ = 60.0f;
	}
}

void HS::Engine::Init(std::string_view title, int width, int height)
{
	logger_ =     new   Logger();
	world_ =      new   World(); 
	renderer_ =   new   Renderer(title, width, height); 
	controller_ = new   Controller();
	isEngineRunning_ = true;
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

float HS::Engine::getFPS()
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
	auto lastTime = std::chrono::steady_clock::now();
	const std::chrono::duration<float> frameTarget{1000.0f / fps_}; // 60fps target

	while (isEngineRunning_) 
	{
	    auto frameStart = std::chrono::steady_clock::now();
	    std::chrono::duration<float> deltaTime = frameStart - lastTime;
	    lastTime = frameStart;

	    controller_->pollInput();
	    world_->renderEntities();
	    renderer_->swapBuffers();

	    auto frameEnd = std::chrono::steady_clock::now();
	    auto timeUsed = frameEnd - frameStart;
	    auto sleepTime = frameTarget - timeUsed;

	    if (sleepTime.count() > 0) {
		std::this_thread::sleep_for(sleepTime);
	    }

	    float actualFps = 1.0f / deltaTime.count();
	    logger_->log(INFO, "FPS:" + std::to_string(actualFps)); 
	}
}


