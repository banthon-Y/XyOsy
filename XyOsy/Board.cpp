/*
* Xy Osy game
* Author: Anthony McGuigan
* 09/11/2018
* v1.0
*/

#include <iostream>
#include <string>
#include "Functions.h"

void Functions::Board() {
	std::cout << "     |     |     " << std::endl;
	std::cout << "  " << pos_[0] << "  |  " << pos_[1] << "  |  " << pos_[2] << "  " << std::endl;
	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;
	std::cout << "  " << pos_[3] << "  |  " << pos_[4] << "  |  " << pos_[5] << "  " << std::endl;
	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;
	std::cout << "  " << pos_[6] << "  |  " << pos_[7] << "  |  " << pos_[8] << "  " << std::endl;
	std::cout << "     |     |     " << std::endl;
	std::cout << movePlayer() << " - Your Turn!!" << std::endl;
}