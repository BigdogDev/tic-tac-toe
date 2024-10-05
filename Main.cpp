#include <iostream>
#include "TrisCore.h"

int main() {
	std::cout << "Tic-tac-toe by Bigdog developer (Matteo Grancani)" << std::endl << std::endl;
	std::cout << "Command guide (position your sign on your preferred position using the number): " << std::endl << std::endl << "ADVICE: USING LETTERS INSTEAD OF NUMERS WILL REQUIRE GAME RESTART" << std::endl << std::endl;
	tris::gameStart();
	while (true) {
		tris::play();
		tris::printGame();
		tris::winCheck();
	}
	return 0;
}