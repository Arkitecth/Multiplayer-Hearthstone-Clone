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
	logger_ = new Logger();
	renderer_ = new Renderer(title, width, height); 
	isEngineRunning_ = true;
}

HS::Logger* HS::Engine::getLogger()
{
	return logger_;
}

HS::Renderer* HS::Engine::getRenderer()
{
	return renderer_;
}

HS::Engine::~Engine()
{
	delete renderer_;
	delete logger_; 
}



