#include "Entity.h"
#include "Event.h"
#include <vector>
namespace HS
{
	class World
	{
		private:
			std::vector<Entity*> entities{};

		public:
			 World() = default; 
			~World(); 
			void addEntity(Entity* entity); 
			void renderEntities(); 
			void removeEntity(Entity* entity); 
			std::vector<Entity*> getEntities(std::string_view type);  
			std::vector<Entity*> getAllEntities(std::string_view type);  
			void broadcastEvent(const Event* e); 
	}; 
}
