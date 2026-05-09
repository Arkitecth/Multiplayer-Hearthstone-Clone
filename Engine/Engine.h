#include "Controller.h"
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
			Logger*     getLogger();
			Renderer*   getRenderer();
			Controller* getController(); 
			World*	    getWorld(); 
			void Init(std::string_view title, int width, int height); 
			void setIsEngineRunning(bool value); 
			bool getIsEngineRunning(); 
			void Run(); 
			~Engine(); 

		private:
			 Engine();
			 bool isEngineRunning_{false};
			 Logger* logger_; 
			 Renderer* renderer_; 
			 Controller* controller_;
			 World* world_; 

	};
}
