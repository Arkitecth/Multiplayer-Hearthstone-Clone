#pragma once
namespace HS
{
	class Controller
	{
		public:
			~Controller() = default; 
			Controller() = default; 
			void pollInput(); 
		
		friend class Engine;
	}; 
}
