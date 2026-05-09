#include "Event.h"

HS::Event::~Event(){}

HS::Event::Event(std::string type)
{
	setType(type);
}

void HS::Event::setType(std::string type)
{
	type_ = type; 
}


std::string HS::Event::getType() const
{
	return type_; 
}



