#include <iostream>
#include "Monitor.h"
#include "UserCommand.h"
#include "Function.h"

int main() {
	Monitor* monitor = new Monitor();

	do {
		std::cout << "Enter command:\n";
		std::cin >> command;
		if (!check_command(command)) {
			std::cout << "Invalid command, try again!\n";
			continue;
		}
		//Window Move command
		if (command == "move") {
			std::cout << "Enter the window offset vector: x = ";
			std::cin >> move_vector_x;
			std::cout << "\ny = ";
			std::cin >> move_vector_y;
			monitor->getMoveVector(move_vector_x, move_vector_y);
		}
		//Command to enter a new window size
		else if (command == "resize") {
			std::cout << "Enter the resizing parameters.\n Height: ";
			std::cin >> size_heigth_window;
			std::cout << "Width: \n";
			std::cin >> size_width_window;
			monitor->getResizeWindow(size_heigth_window, size_width_window);
		}
		//Command to output an image to the console
		else if (command == "display") {
			monitor->getViewMonitor();
		}
	} while (command != "close");
	
	delete monitor;
	monitor = nullptr;
	return 0;
}