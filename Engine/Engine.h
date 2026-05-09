#include "Logger.h"
#include "Renderer.h"
#include "World.h"
#pragma once
#define ENGINE HS::Engine::instance() 
namespace HS
{
	class Engine
	{
		public:
			static Engine& instance();
			Logger* getLogger();
			Renderer* getRenderer();
			World* getWorld(); 
			void Init(std::string_view title, int width, int height); 
			void Run(); 
			~Engine(); 

		private:
			 Engine();
			 bool isEngineRunning_{false};
			 Logger* logger_; 
			 Renderer* renderer_; 
			 World* world_; 

	};
}
