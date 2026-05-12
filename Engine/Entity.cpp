#include "Entity.h"

HS::Vector HS::Entity::getPosition() const
{
	return position_;
}
void HS::Entity::setPosition(Vector position)
{
	position_ = position;  
}
float HS::Entity::getWidth() const
{
	return width_;
}
void  HS::Entity::setHeight(float height)
{
	height_ = height;
}

std::string HS::Entity::getType() const
{
	return type_; 
}
void HS::Entity::setType(std::string_view type)
{
	type_ = type;
}

void HS::Entity::draw(){}

void HS::Entity::update(const HS::Event* e){}

