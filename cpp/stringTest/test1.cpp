#include <iostream>
#include <string>

int main() {
	std::string testText = ".....................";

	int Testo = testText.length();

	std::cout << Testo << std::endl;
	
// check if # x 4
// 
	
	for(int i = 0; i < Testo; i++){
		if(Testo[i] == "#"){
			// -
		} else {

		}
	}

	testText.replace(1, 1, "5");
	std::cout << testText[1];

	return 0;
}
