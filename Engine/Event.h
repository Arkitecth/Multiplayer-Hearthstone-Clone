#pragma once
#include <string>
namespace HS 
{
	const std::string UNDEFINED_EVENT = "HS::Undefined_Event";
	class Event 
	{
		private:
			std::string type_{UNDEFINED_EVENT}; 

		public:
			virtual ~Event();
			Event() = default; 
			Event(std::string type); 
			void setType(std::string type); 
			std::string getType() const; 
	};
}
