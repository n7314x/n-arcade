#include "../../include/games/rock_paper_scissors.h"

#include <iostream>

void terminalClear() {
	std::cout << "\033[2J\033[H";
	return;	
}

void RockPaperScissors::play() {
	terminalClear();
	std::cout << "Rock, paper, scissors\n\n";
} 
