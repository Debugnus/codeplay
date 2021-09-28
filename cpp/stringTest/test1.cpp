#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

int main() {
	std::string testText("............................");

	int Testo = testText.length();
	double dots = Testo; // convert Testo to double for calculating percentages

	int HashCount = 0; // used to count and limit to 4 hashes each time
	int iHash = 0; // for saving HashCounts into

	int HashTotal = 0;		

	for (int i = 0; i < Testo; i++){
		if (testText.compare(".") != 0){	// test if Period character found
			testText.replace(i, 1, "#");	// replace Period with Hash
			HashCount++;	// increment HashCount by 1
			if (HashCount == 4){	// is HashCount 4?
				iHash += HashCount; 
				HashTotal = (iHash/dots)*100;
				std::cout << "[" << testText << "]" << HashTotal << std::endl;
				
				std::this_thread::sleep_for(2000ms);

				HashCount = 0;

			}
		} else {

		}
	}


	return 0;
}
