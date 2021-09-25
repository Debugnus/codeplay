#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

int main() {
	std::string testText(".....................");

	int Testo = testText.length();

	std::cout << Testo << std::endl;

	int HashCount = 0; 
	
	for (int i = 0; i < Testo; i++){

		if (testText.compare(".") != 0){
			testText.replace(i, 1, "#");
			HashCount++;
			if (HashCount == 4){
				std::cout << "[" << testText << "]" << std::endl;
				
				std::this_thread::sleep_for(2000ms);

				HashCount = 0;

			}
		} else {

		}
	}


	return 0;
}
