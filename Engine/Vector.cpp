#include "Vector.h"


HS::Vector::Vector(double position_x, double position_y)
{
	position_x_ = position_x;
	position_y_ = position_y;
}

double HS::Vector::getX()
{
	return position_x_;
}
double HS::Vector::getY()
{
	return position_y_;
}

void HS::Vector::setX(double position_x)
{
	position_x_ = position_x; 
}

void HS::Vector::setY(double position_y)
{
	position_y_ = position_y; 
}

HS::Vector HS::Vector::operator+(const HS::Vector& rhs)
{
	return HS::Vector{rhs.position_x_ + this->position_x_, rhs.position_y_ + this->position_y_};
}

HS::Vector HS::Vector::operator-(const HS::Vector& rhs)
{
	return HS::Vector{this->position_x_ - rhs.position_x_, rhs.position_y_ + this->position_y_};
}

bool HS::Vector::operator==(const HS::Vector& rhs)
{
	return this->position_x_ == rhs.position_x_ && this->position_y_ == rhs.position_y_; 
}


