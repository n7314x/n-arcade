#include "../../include/games/higher_lower.h"

#include <iostream>

void terminalClear() {
	std::cout << "\033[2J\033[H";
	return;	
}

void HigherLower::play() {
	terminalClear();
	std::cout << "Higher or Lower\n\n";
}
