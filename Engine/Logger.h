#include <string_view>
namespace HS
{
	enum LogLevel
	{
		INFO, 
		WARNING, 
		ERROR, 
	}; 
	class Logger
	{
		public:
			Logger() = default; 
			void log(LogLevel level, std::string_view message); 
	}; 
}
