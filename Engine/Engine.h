#include "Logger.h"
#define ENGINE HS::Engine::instance()
namespace HS
{
	class Engine
	{
		public:
			static Engine& instance();
			Logger& getLogger(); 

		private:
			 Engine();
			~Engine(); 
			 Logger logger_; 
	};
}
