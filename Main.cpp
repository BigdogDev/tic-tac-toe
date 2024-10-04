#include <iostream>
#include "TrisCore.h"

int main() {
	short moves = 0;
	std::cout << "TRIS di Matteo Grancani" << std::endl << std::endl;
	std::cout << "GUIDA AI COMANDI: " << std::endl << std::endl;
	tris::gameStart();
	while (true) {
		tris::play();
		tris::printGame();
	}
	return 0;
}