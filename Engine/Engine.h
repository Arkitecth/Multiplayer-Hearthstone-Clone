#include "Controller.h"
#include "Logger.h"
#include "Renderer.h"
#include "World.h"
#pragma once
#define ENGINE HS::Engine::instance() 
const std::string DEFAULT_TITLE = "Hearth Engine"; 
const int DEFAULT_WIDTH = 500;
const int DEFAULT_HEIGHT = 500;
namespace HS
{
	class Engine
	{
		private:
			 Engine();
			 bool  isEngineRunning_{false};
			 float fps_{}; 
			 Logger* logger_; 
			 Renderer* renderer_; 
			 Controller* controller_;
			 World* world_; 

		public:
			static Engine& instance();
			Logger*     getLogger() const;
			Renderer*   getRenderer() const;
			Controller* getController() const; 
			World*	    getWorld() const; 
			void	    Init(std::string_view title = DEFAULT_TITLE, int width = DEFAULT_WIDTH, int height = DEFAULT_HEIGHT); 
			void	    setIsEngineRunning(bool value); 
			bool	    getIsEngineRunning() const; 
			float	    getFPS() const; 
			void	    setFPS(float new_fps); 
			void	    Run(); 
			~Engine(); 


	};
}
