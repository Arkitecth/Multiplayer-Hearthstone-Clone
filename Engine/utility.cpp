#include "utility.h"
#include <sstream>
#include <string>

std::string ToString(int num)
{
	std::ostringstream ss; 
	ss << num; 
	return ss.str();
}


std::string ToString(double num)
{
	std::ostringstream ss; 
	ss << num; 
	return ss.str();
}
