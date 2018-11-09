/*
* Xy Osy game
* Author: Anthony McGuigan
* 09/11/2018
* v1.0
*/

#include <iostream>
#include <string>
#include "Functions.h"

char pos;

void Functions::Move() {
	std::cout << "Please pick a position: " << std::endl;
	std::cin >> pos;
	move_++;
	setPos(getPlayer());
}


std::string Functions::getPos() {

	return "";
}

void Functions::setPos(char player) {
	if (player == 'x') {
		if (pos == '1') {
			if (pos_[0] == 'x' || pos_[0] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[0] = 'x';
			ar[0] = 'x';
		}
		else if (pos == '2') {
			if (pos_[1] == 'x' || pos_[1] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[1] = 'x';
			ar[1] = 'x';
		}
		else if (pos == '3') {
			if (pos_[2] == 'x' || pos_[2] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[2] = 'x';
			ar[2] = 'x';
		}
		else if (pos == '4') {
			if (pos_[3] == 'x' || pos_[3] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[3] = 'x';
			ar[3] = 'x';
		}
		else if (pos == '5') {
			if (pos_[4] == 'x' || pos_[4] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[4] = 'x';
			ar[4] = 'x';
		}
		else if (pos == '6') {
			if (pos_[5] == 'x' || pos_[5] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[5] = 'x';
			ar[5] = 'x';
		}
		else if (pos == '7') {
			if (pos_[6] == 'x' || pos_[6] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[6] = 'x';
			ar[6] = 'x';
		}
		else if (pos == '8') {
			if (pos_[7] == 'x' || pos_[7] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[7] = 'x';
			ar[7] = 'x';
		}
		else if (pos == '9') {
			if (pos_[8] == 'x' || pos_[8] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[8] = 'x';
			ar[8] = 'x';
		}
	}
	else {
		if (pos == '1') {
			if (pos_[0] == 'x' || pos_[0] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[0] = 'o';
			ar[0] = 'o';
		}
		else if (pos == '2') {
			if (pos_[1] == 'x' || pos_[1] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[1] = 'o';
			ar[1] = 'o';
		}
		else if (pos == '3') {
			if (pos_[2] == 'x' || pos_[2] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[2] = 'o';
			ar[2] = 'o';
		}
		else if (pos == '4') {
			if (pos_[3] == 'x' || pos_[3] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[3] = 'o';
			ar[3] = 'o';
		}
		else if (pos == '5') {
			if (pos_[4] == 'x' || pos_[4] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[4] = 'o';
			ar[4] = 'o';
		}
		else if (pos == '6') {
			if (pos_[5] == 'x' || pos_[5] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[5] = 'o';
			ar[5] = 'o';
		}
		else if (pos == '7') {
			if (pos_[6] == 'x' || pos_[6] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[6] = 'o';
			ar[6] = 'o';
		}
		else if (pos == '8') {
			if (pos_[7] == 'x' || pos_[7] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[7] = 'o';
			ar[7] = 'o';
		}
		else if (pos == '9') {
			if (pos_[8] == 'x' || pos_[8] == 'o') {
				std::cout << "Already taken! Chose another slot: ";
				std::cin >> pos;
				setPos(pos);
			}
			pos_[8] = 'o';
			ar[8] = 'o';
		}
	}
}

int Functions::getMove() {
	return move_;
}