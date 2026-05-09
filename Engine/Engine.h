#include "Logger.h"
#include "Renderer.h"
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
			void Init(std::string_view title, int width, int height); 
			~Engine(); 

		private:
			 Engine();
			 bool isEngineRunning_{false};
			 Logger* logger_; 
			 HS::Renderer* renderer_; 
	};
}
