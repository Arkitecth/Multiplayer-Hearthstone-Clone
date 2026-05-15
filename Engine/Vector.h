#pragma once
namespace HS
{
	class Vector
	{
		public:
			float  getX() const; 
			float  getY() const; 
			void   setX(double position_x); 
			void   setY(double position_y); 

			Vector operator+(const HS::Vector& rhs); 
			Vector operator-(const HS::Vector& rhs); 
			bool   operator==(const HS::Vector& rhs); 
			Vector() = default; 
			Vector(float position_x, float positon_y); 

		private:
			float position_x_{};
			float position_y_{};
	}; 
}


