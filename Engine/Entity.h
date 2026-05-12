#include "Vector.h"
#include "Event.h"
#include <string>
#include <string_view>
#pragma once
namespace HS
{
const std::string UNDEFINED_TYPE = "undefined"; 
	class Entity
	{
		private:
			HS::Vector position_{};
			float width_{};
			float height_{};
			std::string type_{UNDEFINED_TYPE};
		
		public:
			Entity() = default; 
			Vector       getPosition() const; 
			void         setPosition(Vector position); 
			float        getWidth() const; 
			void	     setHeight(float height); 
			std::string  getType() const; 
			void         setType(std::string_view type); 
			virtual      ~Entity() = default; 
			virtual void draw() = 0; 
			virtual void update(const HS::Event* e) = 0; 
	}; 
}
