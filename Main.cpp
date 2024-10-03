#include <iostream>
#include "TrisCore.h"

int main() {
	std::cout << "TRIS di Matteo Grancani" << std::endl << std::endl;
	std::cout << "GUIDA AI COMANDI: " << std::endl << std::endl;
	tris::gameStart();
	for (int i = 0; i < 8; i++)
	{
		tris::play();
		tris::printGame();
	}
	return 0;
}