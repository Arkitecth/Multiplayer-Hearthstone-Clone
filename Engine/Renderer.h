#include <string>
#include <SDL3/SDL.h>
#pragma once
namespace HS
{
	class Renderer
	{
		public:
			void drawRectangle(float x, float y, float width, float height); 
			void drawTexture(); 
			void drawCard(); 
			void getWindowTitle(); 
			void swapBuffers();

		private:
			int window_width_{}; 
			int window_height_{};
			SDL_Window* window_{};
			SDL_Renderer* renderer_{};
			std::string title_{};
			Renderer(std::string_view title, int width, int height); 

		friend class Engine; 
	}; 
}
