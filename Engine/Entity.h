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
			Vector position_{};
			float width_{};
			float height_{};
			std::string type_{UNDEFINED_TYPE};
		
		public:
			Entity() = default; 
			Vector       getPosition(); 
			void         setPosition(Vector position); 
			float        getWidth(); 
			void	     setHeight(float height); 
			std::string  getType(); 
			void         setType(std::string_view type); 
			virtual      ~Entity(); 
			virtual void draw() = 0; 
			virtual void update(const HS::Event* e) = 0; 
	}; 
}
