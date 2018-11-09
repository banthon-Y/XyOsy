/*
* Xy Osy game
* Author: Anthony McGuigan
* 09/11/2018
* v1.0
*/

#include <iostream>
#include <string>
#include "Functions.h"

bool Functions::checkWin() {
	bool defa = false;
	bool winx = false;
	bool wino = false;
	
	//combinations of wins (for x)
	if (getPlayer() == 'x') {
		if (ar[0] == 'x' && ar[1] == 'x' && ar[2] == 'x') {
			winx = true;
			return winx;
		}
		else if (ar[3] == 'x' && ar[4] == 'x' && ar[5] == 'x') {
			winx = true;
			return winx;
		}
		else if (ar[6] == 'x' && ar[7] == 'x' && ar[8] == 'x') {
			winx = true;
			return winx;
		}
		else if (ar[0] == 'x' && ar[3] == 'x' && ar[6] == 'x') {
			winx = true;
			return winx;
		}
		else if (ar[1] == 'x' && ar[4] == 'x' && ar[7] == 'x') {
			winx = true;
			return winx;
		}
		else if (ar[2] == 'x' && ar[5] == 'x' && ar[8] == 'x') {
			winx = true;
			return winx;
		}
		else if (ar[0] == 'x' && ar[4] == 'x' && ar[8] == 'x') {
			winx = true;
			return winx;
		}
		else if (ar[2] == 'x' && ar[4] == 'x' && ar[6] == 'x') {
			winx = true;
			return winx;
		}
		else {
			return false;
		}
	}
	
	//combinations of wins (for o)
	if (getPlayer() == 'o') {
		if (ar[0] == 'o' && ar[1] == 'o' && ar[2] == 'o') {
			winx = true;
			return winx;
		}
		else if (ar[3] == 'o' && ar[4] == 'o' && ar[5] == 'o') {
			wino = true;
			return wino;
		}
		else if (ar[6] == 'o' && ar[7] == 'o' && ar[8] == 'o') {
			wino = true;
			return wino;
		}
		else if (ar[0] == 'o' && ar[3] == 'o' && ar[6] == 'o') {
			wino = true;
			return wino;
		}
		else if (ar[1] == 'o' && ar[4] == 'o' && ar[7] == 'o') {
			wino = true;
			return wino;
		}
		else if (ar[2] == 'o' && ar[5] == 'o' && ar[8] == 'o') {
			wino = true;
			return wino;
		}
		else if (ar[0] == 'o' && ar[4] == 'o' && ar[8] == 'o') {
			wino = true;
			return wino;
		}
		else if (ar[2] == 'o' && ar[4] == 'o' && ar[6] == 'o') {
			wino = true;
			return wino;
		}
		else {
			return false;
		}
	}
	return defa;
}