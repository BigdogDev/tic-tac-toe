#include "TrisCore.h"
#include <iostream>

short tris::game[DIM] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
bool tris::turn = true;
short tris::moves = 0;

void tris::initializeGame() {
	for (int i = 0; i < 9; i++)
	{
		tris::game[i] = 0;
	}
	std::cout << "Draw, the game will restart" << std::endl << std::endl;
	tris::turn = false;
	tris::moves = 0;
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
	short *temp2;
	if (tris::turn) {
		do
		{
			std::cout << "PLAYER O: where would you like to position your sign (Number included from 1 to 9)?" << std::endl;
			std::cin >> temp;
			std::cout << std::endl;
			temp2 = &tris::game[temp - 1];
		} while ((temp < 1 || temp > 9) || *temp2 != 0);
		*temp2 = 1;
		tris::turn = false;
	}
	else
	{
		do
		{
			std::cout << "PLAYER X: where would you like to position your sign (Number included from 1 to 9)?" << std::endl;
			std::cin >> temp;
			std::cout << std::endl;
			temp2 = &tris::game[temp - 1];
			} while ((temp < 1 || temp > 9) || *temp2 != 0);
		*temp2 = 2;
		tris::turn = true;
	}
}

void tris::winCheck() {
	if (WINCOND1)
	{
		std::cout << "Player O has won!" << std::endl;
		exit(0);
	}
	else if (WINCOND2) {
		std::cout << "Player X has won!" << std::endl;
		exit(0);
	}
	else if (tris::moves == 8) {
		tris::initializeGame();
		tris::printGame();
	}
	else {
		tris::moves++;
	}
}