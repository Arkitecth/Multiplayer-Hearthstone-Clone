#include "World.h"
#include "Entity.h"
#include "Event.h"
#include <algorithm>

HS::World::~World()
{
	for(int i = 0; i < entities.size(); i++)
	{
		delete entities[i]; 
	}
}

void HS::World::addEntity(Entity* entity)
{
	entities.push_back(entity); 
}

void HS::World::renderEntities()
{
	for(int i = 0; i < entities.size(); i++)
	{
		entities[i]->draw();
	}
}

void HS::World::removeEntity(Entity* entity)
{
	auto it = std::remove(entities.begin(), entities.end(), entity); 
	if (it == entities.begin() && entity != entities[0]) 
	{
		return;
	}
	if (it != entities.begin()) 
	{
		entities.erase(it);
		delete entity;
	}
}

std::vector<HS::Entity*> HS::World::getEntities(std::string_view type) const
{
	std::vector<Entity*> new_entities{};
	for(int i = 0; i < entities.size(); i++)
	{
		if (entities[i]->getType() == type) 
		{
			new_entities.push_back(entities[i]); 
		}
	}
	return new_entities;
}

std::vector<HS::Entity*> HS::World::getAllEntities(std::string_view type) const
{
	std::vector<Entity*> new_entities{};
	for(int i = 0; i < entities.size(); i++)
	{
		new_entities.push_back(entities[i]); 
	}
	return new_entities;
}

void HS::World::broadcastEvent(const Event* e)
{
	for(int i = 0; i < entities.size(); i++)
	{
		entities[i]->update(e);
	}
}
