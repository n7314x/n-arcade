#include "../../include/games/rock_paper_scissors.h"
#include "../../include/terminal.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

void RockPaperScissors::startGame()
{
	terminalClear();

    std::string playerChoice;

    std::cout << "Choose rock, paper, or scissors: ";
    std::cin >> playerChoice;

    int randomNumber = std::rand() % 3;

    std::string computerChoice;

    if (randomNumber == 0) {
        computerChoice = "rock";
    } else if (randomNumber == 1) {
        computerChoice = "paper";
    } else {
        computerChoice = "scissors";
    }

    std::cout << "Computer chose: " << computerChoice << '\n';

    if (playerChoice == computerChoice) {
        std::cout << "It is a tie.\n";
    } else if (
        (playerChoice == "rock" && computerChoice == "scissors") ||
        (playerChoice == "paper" && computerChoice == "rock") ||
        (playerChoice == "scissors" && computerChoice == "paper")
    ) {
        std::cout << "You win.\n";
    } else {
        std::cout << "You lose.\n";
    }
}

void RockPaperScissors::play()
{
    std::srand(std::time(nullptr));

    while (true) {
        terminalClear();

        int choice;

        std::cout << "Rock, paper, scissors!\n\n";
        std::cout << "1. Start game\n";
        std::cout << "2. Exit\n\n";

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            terminalClear();
            startGame();

            std::cout << "\nPress Enter to continue...";
            std::cin.ignore();
            std::cin.get();
        } else if (choice == 2) {
            return;
        } else {
            std::cout << "Invalid choice.\n";

            std::cout << "\nPress Enter to continue...";
            std::cin.ignore();
            std::cin.get();
        }
    }
} 
