#pragma once
#define DIM 9

// Tutte le seguenti macro sono le condizioni di vittoria per ciascun giocatore
// Da COND1 a COND8 sono per il primo giocatore
#define COND1 (tris::game[0] == 1 && tris::game[1] == 1 && tris::game[2] == 1)
#define COND2 (tris::game[3] == 1 && tris::game[4] == 1 && tris::game[5] == 1)
#define COND3 (tris::game[6] == 1 && tris::game[7] == 1 && tris::game[8] == 1)
#define COND4 (tris::game[0] == 1 && tris::game[3] == 1 && tris::game[6] == 1)
#define COND5 (tris::game[1] == 1 && tris::game[4] == 1 && tris::game[7] == 1)
#define COND6 (tris::game[2] == 1 && tris::game[5] == 1 && tris::game[8] == 1)
#define COND7 (tris::game[0] == 1 && tris::game[4] == 1 && tris::game[8] == 1)
#define COND8 (tris::game[2] == 1 && tris::game[4] == 1 && tris::game[6] == 1)
// Da COND9 a COND16 sono per il secondo giocatore
#define COND9 (tris::game[0] == 2 && tris::game[1] == 2 && tris::game[2] == 2)
#define COND10 (tris::game[3] == 2 && tris::game[4] == 2 && tris::game[5] == 2)
#define COND11 (tris::game[6] == 2 && tris::game[7] == 2 && tris::game[8] == 2)
#define COND12 (tris::game[0] == 2 && tris::game[3] == 2 && tris::game[6] == 2)
#define COND13 (tris::game[1] == 2 && tris::game[4] == 2 && tris::game[7] == 2)
#define COND14 (tris::game[2] == 2 && tris::game[5] == 2 && tris::game[8] == 2)
#define COND15 (tris::game[0] == 2 && tris::game[4] == 2 && tris::game[8] == 2)
#define COND16 (tris::game[2] == 2 && tris::game[4] == 2 && tris::game[6] == 2)

// Condizione di vittoria abbreviata

#define WINCOND1 COND1 || COND2 || COND3 || COND4 || COND5 || COND6 || COND7 || COND8
#define WINCOND2 COND9 || COND10 || COND11 || COND12 || COND13 || COND14 || COND15 || COND16


namespace tris {
	extern short game[DIM]; // EXTERN fondamentale per rendere la variabile globale a TrisCore.cpp
	extern bool turn;
	extern short moves;
	void initializeGame();
	void printGame();
	void gameStart();
	void play();
	void winCheck();
};