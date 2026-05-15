#include "Renderer.h"
#include "Engine.h"
#include <SDL3/SDL.h>
#include <cstddef>

HS::Renderer::Renderer(std::string_view title, int width, int height)
{
	window_title_ = title;
	window_width_ = width;
	window_height_ = height;
	bool success = SDL_CreateWindowAndRenderer(title.data(), width, height, SDL_WINDOW_RESIZABLE, &window_, &renderer_); 
	SDL_SetRenderVSync(renderer_, 1); 
	if (!success) 
	{
		ENGINE.getLogger()->log(ERROR, SDL_GetError()); 
		return;
	}
}

void HS::Renderer::drawRectangle(float x, float y, float width, float height)
{
	SDL_FRect rect{x, y, width, height}; 
	SDL_SetRenderDrawColor(renderer_,  255, 0,  0, 1); 
	SDL_RenderRect(renderer_, &rect); 
}

std::string HS::Renderer::getWindowTitle() const
{
	return window_title_;
}

void HS::Renderer::swapBuffers()
{
	SDL_RenderPresent(renderer_); 
	SDL_SetRenderDrawColor(renderer_,  0, 0,  0, 1); 
	SDL_RenderClear(renderer_); 
}

SDL_Renderer* HS::Renderer::getSDLRenderer() const
{
	return renderer_;
}

void HS::Renderer::drawTexture(HS::Texture& texture)
{
	SDL_FRect dstRect{texture.getPosition().getX(), texture.getPosition().getY(), texture.getWidth(), texture.getHeight()};
	SDL_RenderTexture(renderer_, texture.getTexture(), NULL, &dstRect); 
}

void HS::Renderer::drawCard()
{

}



