#include "Vector.h"
#include <SDL3/SDL.h>
#include <string_view>
#pragma once
namespace HS
{
	class Texture
	{
		private:
			SDL_Texture* texture_; 
			Vector position_{};
			float width_{};
			float height_{};
		public:
			Texture(std::string_view filePath, Vector position, float width, float height); 
			SDL_Texture* getTexture() const; 
			float getWidth() const;
			float getHeight() const;
			Vector getPosition() const; 
	}; 
}
