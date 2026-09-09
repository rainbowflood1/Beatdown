#include <TigerUI/TigerUI.hpp>
#include <vector>
#include <cstdint>
#include <thread>
#include <chrono>

TigerUI tui;
uint32_t fps = 24;
bool stop = false;

void MainMenu() {
	
}

int main() {
	while (stop == false) {
		std::this_thread::sleep_for(std::chrono::seconds(1/fps));
		MainMenu();
	}
	return 0;
}
