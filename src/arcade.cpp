#include "../include/arcade.h"

#include <iostream>

void Arcade::run() {
	showMenu();
}

void Arcade::showMenu() {
	system("clear");

	std::cout << "==================\n";
	std::cout << "N's Arcade\n";
	std::cout << "==================\n\n";
}
