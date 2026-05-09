#pragma once
namespace HS
{
	class Vector
	{
		public:
			double getX(); 
			double getY(); 
			void   setX(double position_x); 
			void   setY(double position_y); 

			Vector operator+(HS::Vector& rhs); 
			Vector operator-(HS::Vector& rhs); 
			bool   operator=(HS::Vector& rhs); 
			Vector() = default; 
			Vector(double position_x, double positon_y); 

		private:
			double position_x_{};
			double position_y_{};
	}; 
}


