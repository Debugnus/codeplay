#include <iostream>
#include <thread>
#include <chrono>

int main() {
	using namespace std::chrono_literals;
	std::this_thread::sleep_for(2000ms);
	std::cout << "Attepting to send love...\n";

/////
///// code too simple.  Testing string algorithm
/////

	std::this_thread::sleep_for(2000ms);
	std::cout << "[####.................10%]\n";

	std::this_thread::sleep_for(2000ms);
	std::cout << "[########.............20%]\n";

// try for loop and character detection.
// use array? string?

	return 0;
}
