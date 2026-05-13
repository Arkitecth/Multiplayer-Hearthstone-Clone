#include <chrono>
namespace HS
{
	class Clock
	{
		public:
			Clock(); 
			void start(); 
			std::chrono::duration<float> delta();
			void sleepUntilNextFrame(float fps); 

		private:
			std::chrono::time_point<std::chrono::steady_clock> startTime{};

	}; 
}
