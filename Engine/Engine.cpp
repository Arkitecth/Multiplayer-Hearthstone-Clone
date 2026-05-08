#include "Engine.h"

HS::Engine& HS::Engine::instance()
{
	static Engine engine; 

	return engine;
}

HS::Engine::Engine()
{

}



