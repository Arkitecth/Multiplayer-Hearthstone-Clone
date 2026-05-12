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
			Logger*     getLogger() const;
			Renderer*   getRenderer() const;
			Controller* getController() const; 
			World*	    getWorld() const; 
			void Init(std::string_view title, int width, int height); 
			void setIsEngineRunning(bool value); 
			bool getIsEngineRunning() const; 
			float getFPS(); 
			void setFPS(float new_fps); 
			
			void Run(); 
			~Engine(); 

		private:
			 Engine();
			 bool isEngineRunning_{false};
			 float fps_; 
			 Logger* logger_; 
			 Renderer* renderer_; 
			 Controller* controller_;
			 World* world_; 

	};
}
