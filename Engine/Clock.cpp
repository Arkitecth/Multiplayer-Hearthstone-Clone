#include "Clock.h"
#include <chrono>
#include <thread>

HS::Clock::Clock()
{
	start();
}

void HS::Clock::start()
{
	startTime = std::chrono::steady_clock::now(); 
}

std::chrono::duration<float> HS::Clock::delta()
{
	auto now = std::chrono::steady_clock::now(); 

	std::chrono::duration<float> deltaTime = now - startTime;

	return deltaTime;
}


void HS::Clock::sleepUntilNextFrame(float fps)
{
	std::chrono::duration<float> frame_target {1.0f / fps}; 

	auto timeToSleep = startTime + frame_target;

	std::this_thread::sleep_until(timeToSleep); 
}
