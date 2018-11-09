/*
* Xy Osy game
* Author: Anthony McGuigan
* 09/11/2018
* v1.0
*/

#include <iostream>
#include <string>
#include "Functions.h"

int main() {
	Functions f;
	while (f.checkWin() == false) {
		f.Board();
		f.Move();
		if (f.getMove() == 9) {
			f.Board();
			std::cout << "Draw! No one won!!" << std::endl;
			return 0;
		}
	}
	f.Board();
	if (f.getMove() % 2 == 0) {
		std::cout << "Player 'O' - You Win!" << std::endl;
	}
	else {
		std::cout << "Player 'X' - You Win!" << std::endl;
	}
	return 0;
}