/*
* Xy Osy game
* Author: Anthony McGuigan
* 09/11/2018
* v1.0
*/
#pragma once

#include <string>
#include <iostream>

class Functions {
private:
	char player[2]{ 'x','o' };
	char pos_[9]{'1','2','3','4','5','6','7','8','9'};
public:
	char ar[9];
	
	std::string getPos();
	void setPos(char player);

	char getPlayer();
	char movePlayer();
	
	int move_ = 0;
	
	//functions
	void Board();
	void Move();
	bool checkWin();
	int getMove();
};


