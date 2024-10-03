#include "TrisCore.h"
#include <iostream>

short tris::game[DIM] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
bool tris::turn = true;

void initializeGame() {
	for (int i = 0; i < 9; i++)
	{
		tris::game[i] = 0;
	}
}

void tris::printGame() {
	std::cout << " ";
	for (int i = 0; i < 9; i++)
	{
		if (i == 2 || i == 5) {
			switch (tris::game[i])
			{
			case 1:
				std::cout << "O ";
				break;
			case 2:
				std::cout << "X ";
				break;
			default:
				std::cout << "  ";
				break;
			}
			std::cout << std::endl;
			std::cout << "-----------";
			std::cout << std::endl;
			std::cout << " ";
		}
		else if (i == 8)
		{
			switch (tris::game[i])
			{
			case 1:
				std::cout << "O ";
				break;
			case 2:
				std::cout << "X ";
				break;
			default:
				std::cout << "  ";
				break;
			}
		}
		else {
			switch (tris::game[i])
			{
			case 1:
				std::cout << "O | ";
				break;
			case 2:
				std::cout << "X | ";
				break;
			default:
				std::cout << "  | ";
				break;
			}
		}
	}
	std::cout << std::endl << std::endl;
}

void tris::gameStart() {
	std::cout << " ";
	for (int i = 0; i < 9; i++)
	{
		if (i == 2 || i == 5) {
			std::cout << i + 1;
			std::cout << std::endl;
			std::cout << "-----------";
			std::cout << std::endl;
			std::cout << " ";
		}
		else if (i == 8)
		{
			std::cout << i + 1;
		}
		else {
			std::cout << i + 1 << " | ";
		}
	}
	std::cout << std::endl << std::endl;
}

void tris::play() {
	short temp;
	if (tris::turn) {
		do
		{
			std::cout << "GIOCATORE 1 (O): dove vuoi posizionare la tua O (Numero compreso tra 1 e 9)?" << std::endl;
			std::cin >> temp;
		} while (tris::game[temp] == 0);
		tris::game[temp - 1] = 1;
		tris::turn = false;
	}
	else
	{
		do
		{
			std::cout << "GIOCATORE 2 (X): dove vuoi posizionare la tua X (Numero compreso tra 1 e 9)?" << std::endl;
			do
			{
			std::cin >> temp;
			} while (temp < 1 || temp > 9);
		} while (tris::game[temp] != 0);
		tris::game[temp - 1] = 2;
		tris::turn = true;
	}
}