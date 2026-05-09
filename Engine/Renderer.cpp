#include "Renderer.h"
#include "Engine.h"
#include <SDL3/SDL.h>

HS::Renderer::Renderer(std::string_view title, int width, int height)
{
	title_ = title;
	width_ = width;
	height_ = height;
	bool success = SDL_CreateWindowAndRenderer(title.data(), width, height, SDL_WINDOW_RESIZABLE, &window_, &renderer_); 
	if (!success) 
	{
		ENGINE.getLogger()->log(ERROR, SDL_GetError()); 
		return;
	}
}

void HS::Renderer::drawRectangle()
{
	drawRectangle();
}


