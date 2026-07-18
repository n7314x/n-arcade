#include "../../include/games/rock_paper_scissors.h"
#include "../../include/terminal.h"

#include <iostream>

void RockPaperScissors::play() {
	terminalClear();
	int choice;

	std::cout << "Rock, paper, scissors\n\n";

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

void startGame() {
	terminalClear();
	int choice;

	std::cout << "Welcome to rock, paper, scissors. It should be self-explanatory how to play.\n\n";
}
