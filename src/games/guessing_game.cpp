#include "../../include/games/guessing_game.h"

#include <iostream>

void terminalClear() {
	std::cout << "\033[2J\033[H";
	return;	
}

void GuessingGame::play() {
	terminalClear();
	std::cout << "Welcome to N's guessing game.\n\n";
}
