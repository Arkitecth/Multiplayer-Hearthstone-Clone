#include "Logger.h"
#include <iostream>


void HS::Logger::log(LogLevel level, std::string_view message) {

	if (level == INFO) {

		std::cout << "[INFO]: " <<  message << '\n';

	} else if (level == WARNING) {

		std::cout << "[WARN]: " <<  message << '\n';

	} else {

		std::cout << "[ERROR]: " << message << '\n';
	}
}

