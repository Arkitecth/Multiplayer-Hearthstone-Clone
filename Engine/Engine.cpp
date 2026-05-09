#include "Engine.h"
#include <cassert>

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

HS::Logger* HS::Engine::getLogger()
{
	return logger_;
}

HS::Controller* HS::Engine::getController()
{
	return controller_;
}

HS::World* HS::Engine::getWorld()
{
	return world_;
}

HS::Renderer* HS::Engine::getRenderer()
{
	return renderer_;
}

void HS::Engine::setIsEngineRunning(bool value)
{
	isEngineRunning_ = value;
}

bool HS::Engine::getIsEngineRunning()
{
	return isEngineRunning_;
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
	while (isEngineRunning_) 
	{
		controller_->pollInput(); 

		world_->renderEntities();

		renderer_->swapBuffers(); 
	}
}


