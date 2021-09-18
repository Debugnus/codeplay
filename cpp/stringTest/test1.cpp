#include <iostream>
#include <string>

int main() {
	std::string testText = ".....................";

	int Testo = testText.length();

	std::cout << Testo << std::endl;
	
// check if # x 4
// 
	
	for (int i = 0; i < Testo; i++){
		int HashCount = 0;
		if (Testo[i] == "."){
			testText.replace(Testo[i], 1, "#");
			HashCount++;
			if (HashCount == 4){
				std::cout << "[" << testText << "]" << std::endl;
				
				// timer

				// then reset HashCount
			}
		} else {

		}
	}

	testText.replace(1, 1, "5");
	std::cout << testText[1];

	return 0;
}
