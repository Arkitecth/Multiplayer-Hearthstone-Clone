#include "Engine.h"

HS::Engine& HS::Engine::instance()
{
	static Engine engine; 

	return engine;
}

HS::Engine::Engine()
{
	logger_ = Logger();
}

HS::Logger& HS::Engine::getLogger()
{
	return logger_;
}

HS::Engine::~Engine()
{

}



