#include "../../include/games/higher_lower.h"
#include "../../include/terminal.h"

#include <iostream>

void HigherLower::startGame() {
	std::cout << "Welcome to N's higher or lower game. To play, guess a number and I'll tell you \"higher\" or \"lower\".\n\n";
}

void HigherLower::play() {
	terminalClear();
	int choice;

	std::cout << "Higher or Lower\n\n";

	std::cout << "1. Start game\n";
	std::cout << "2. Exit\n\n";

	std::cout << "Enter your choice: ";
	std::cin >> choice;

	if (choice == 1) {
		startGame();
	} else if (choice == 2) {
		return;
	} else {
		std::cout << "Invalid choice";
	}
}

