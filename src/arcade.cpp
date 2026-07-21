#include "../include/arcade.h"
#include "../include/games/guessing_game.h"
#include "../include/games/higher_lower.h"
#include "../include/games/rock_paper_scissors.h"
#include "../include/games/battleship.h"

#include "terminal.h"

#include <iostream>

void Arcade::run() {
	mainMenu();
}

void Arcade::mainMenu() {
	while(true) {
		terminalClear();
		int choice;

		std::cout << "==================\n";
		std::cout << "N's Arcade\n";
		std::cout << "==================\n\n";

		std::cout << "1. Guessing game\n";
		std::cout << "2. Higher or lower\n";
		std::cout << "3. Rock, paper, scissors\n";
		std::cout << "4. Battleship\n\n"

		std::cout << "Pick a game to play: ";
		std::cin >> choice;

		switch (choice) {
			case 1: {
				GuessingGame game;
				game.play();
				break;
			}
			case 2: {
				HigherLower game;
				game.play();
				break;
			}
			case 3: {
				RockPaperScissors game;
				game.play();
				break;
			}
			case 4: {
				Battleship game;
				game.play();
				break;
			}
			default:
				std::cout << "Invalid choice";
				break;
		}
	}
}
