#include "../include/terminal.h"
#include <iostream>

void terminalClear() {
	std::cout << "\033[2J\033[H";
	return;	
}
