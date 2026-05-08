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
			void log(LogLevel level, std::string_view message); 

		private:
			Logger() = default; 

		friend class Engine;
	}; 
}
