#include "../include/arcade.h"

#include <iostream>

void Arcade::run() {
	showMenu();
}

void Arcade::showMenu() {
	std::cout << "==================" << '\n' << endl;
	std::cout << "N's Arcade" << '\n' << endl;
	std::cout << "==================" << '\n\n' << endl;
}
