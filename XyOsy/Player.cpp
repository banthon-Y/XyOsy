/*
* Xy Osy game
* Author: Anthony McGuigan
* 09/11/2018
* v1.0
*/

#include <iostream>
#include <string>
#include "Functions.h"

char Functions::getPlayer() {
	char calcPlayer;
	if (move_ % 2 == 0) {
		calcPlayer = player[1];
	}
	else {
		calcPlayer = player[0];
	}
	
	return calcPlayer;
}

char Functions::movePlayer() {
	char calcPlayer;
	if (move_ % 2 == 0) {
		calcPlayer = player[0];
	}
	else {
		calcPlayer = player[1];
	}

	return calcPlayer;
}