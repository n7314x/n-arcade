#include "../include/arcade.h"

#include <iostream>

void Arcade::run() {
	showMenu();
}

void Arcade::mainMenu() {
	std::cout << "\033[2J\033[H";

	std::cout << "==================\n";
	std::cout << "N's Arcade\n";
	std::cout << "==================\n\n";

	std::cout << "1. Guessing game\n";
	std::cout << "2. Higher or lower\n";
	std::cout << "3. Rock, paper, scissors\n\n";

	std::cout << "What do you want to play?: ";
	std::cin >> choice;

	switch (choice) {
		case 1:
			std::cout << "Starting guessing game...";
			break;
		case 2:
			std::cout << "Starting higher or lower...";
			break;
		case 3:
			std::cout << "Starting rock, paper, scissors...";
			break;
	}
}
