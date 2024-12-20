#include <classes/Game/Game.hpp>
#include <classes/Profiler.hpp>
#include <thread>

int main() {
	unsigned int numThreads = std::thread::hardware_concurrency();
	if (PROFILER_ON)
		Profiler::StartTracking("Game Constructor");
	Game *game = new Game();
	if (PROFILER_ON)
		Profiler::StopTracking("Game Constructor");
	
	game->StartLoop();
	if (PROFILER_ON)
		Profiler::LogData();
	delete game;
	return 0;
}