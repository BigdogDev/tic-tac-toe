#pragma once
#define DIM 9

namespace tris {
	extern short game[DIM]; // EXTERN fondamentale per rendere la variabile globale a TrisCore.cpp
	extern bool turn;
	void printGame();
	void gameStart();
	void play();
};