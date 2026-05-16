#include "Texture.h"
#include "Engine.h"
#include "Logger.h"

HS::Texture::Texture(std::string_view filePath, Vector position, float width, float height)
{
	SDL_Surface* surface = SDL_LoadPNG(filePath.data()); 
	if (!surface) 
	{
		ENGINE.getLogger()->log(ERROR, SDL_GetError()); 
	} 
	else 
	{
		position_ = position; 
		width_ = width;
		height_ = height;
		texture_ = SDL_CreateTextureFromSurface(ENGINE.getRenderer()->getSDLRenderer(), surface);
	}
	SDL_DestroySurface(surface); 
}

// HS::Texture::Texture(std::string_view filePath)
// {
// 	SDL_Surface* surface = SDL_LoadPNG(filePath.data()); 
// 	if (!surface) 
// 	{
// 		ENGINE.getLogger()->log(ERROR, SDL_GetError()); 
// 	} 
// 	SDL_DestroySurface(surface); 
// }

SDL_Texture* HS::Texture::getTexture() const
{
	return texture_;
}

HS::Vector HS::Texture::getPosition() const
{
	return position_;
}

float HS::Texture::getWidth() const
{
	return width_;
}

float HS::Texture::getHeight() const
{
	return height_;
}

void HS::Texture::setWidth(float width)
{
	width_ = width;
}

void HS::Texture::setHeight(float height)
{
	height_ = height;
}

void HS::Texture::setPosition(Vector position)
{
	position_ = position;
}
