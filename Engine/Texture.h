#include "Vector.h"
#include <SDL3/SDL.h>
#include <string_view>
namespace HS
{
	class Texture
	{
		private:
			SDL_Texture* texture_; 
			Vector	position_{};
		public:
			Texture(std::string_view filePath, Vector position); 
			SDL_Texture* getTexture() const; 
	}; 
}
