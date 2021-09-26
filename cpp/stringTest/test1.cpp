#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

int main() {
	std::string testText("........................................");

	int Testo = testText.length();
	double dots = Testo;

	int HashCount = 0; // used to count and limit to 4 hashes each time
	int iHash = 0;

	int HashTotal = 0;		// ---- Change to floating point number 0.0


	for (int i = 0.0; i < Testo; i++){
		if (testText.compare(".") != 0){	// test if Period character found
			testText.replace(i, 1, "#");	// replace Period with Hash
			HashCount++;	// increment HashCount by 1
//			std::cout << "\n" << i << "\n";
			if (HashCount == 4){	// is HashCount 4?
				iHash += HashCount; 
				HashTotal = (iHash/dots)*100;	// why calculating to 0 ?
				std::cout << "[" << testText << "]" << HashTotal << std::endl;
				
				std::this_thread::sleep_for(2000ms);

				HashCount = 0.0;

			}
		} else {

		}
	}


	return 0;
}
