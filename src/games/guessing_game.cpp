#include "../../include/games/guessing_game.h"
#include "../../include/terminal.h"

#include <iostream>

void GuessingGame::startGame() {
	terminalClear();

	std::cout << "Welcome to N's guessing game. To play, simply guess numbers until you get the right one.\n\n";
	
	std::cout << "Enter a number: ";
}

void GuessingGame::play() {
	terminalClear();
	int choice;

	std::cout << "Guessing game.\n\n";

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

