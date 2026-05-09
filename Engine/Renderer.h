#include <string>
#include <SDL3/SDL.h>
#pragma once
namespace HS
{
	class Renderer
	{
		public:
			void drawRectangle(); 
			void drawTexture(); 
			void drawCard(); 
			void getWindowTitle(); 

		private:
			int width_{}; 
			int height_{};
			SDL_Window* window_{};
			SDL_Renderer* renderer_{};
			std::string title_{};
			Renderer(std::string_view title, int width, int height); 

		friend class Engine; 
	}; 
}
