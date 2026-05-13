#include "Texture.h"
#include "Engine.h"
#include "Logger.h"

HS::Texture::Texture(std::string_view filePath, Vector position)
{
	SDL_Surface* surface = SDL_LoadPNG(filePath.data()); 
	if (!surface) 
	{
		ENGINE.getLogger()->log(ERROR, "An error occurred loading the PNG File for Texture"); 
	} 
	else 
	{
		position_ = position; 
		texture_ = SDL_CreateTextureFromSurface(ENGINE.getRenderer()->getSDLRenderer(), surface);
	}
	SDL_DestroySurface(surface); 
}


SDL_Texture* HS::Texture::getTexture() const
{
	return texture_;
}
