#include "Logger.h"
namespace HS
{
	class Engine
	{
		public:
			static Engine& instance();
			Logger* getLogger(); 

		private:
			Engine();
			Logger* logger_; 
	};
}
