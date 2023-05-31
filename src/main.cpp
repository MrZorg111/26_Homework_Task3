#include <iostream>
#include "Monitor.h"
#include "UserCommand.h"

int main() {
	Monitor* monitor = new Monitor();

	do {
		std::cout << "Enter command:\n";
		std::cin >> command;
		// оманда move принимает вектор, на который надо сместить окно на экране. —ообщение с новыми координатами окна по€вл€етс€ на экране.
		if (command == "move") {
			std::cout << "Enter the window offset vector: x = \n";
			std::cin >> move_vector_x;
			std::cout << " y = \n";
			std::cin >> move_vector_y;
			monitor->getMoveVector(move_vector_x, move_vector_y);
		}
		// оманда resize запрашивает из стандартного ввода новый размер окна. ѕосле изменени€ размера сообщение с новым размером выводитс€ на экране.
		else if (command == "resize") {
			std::cout << "Enter the resizing parameters.\n Height: ";
			std::cin >> size_heigth_window;
			std::cout << "Width: \n";
			std::cin >> size_width_window;
			monitor->getResizeWindow(size_heigth_window, size_width_window);
		}
		// оманда display выводит текущее изображение монитора в консоль. 0 Ч это пиксель вне области окна, 1 Ч с окном.
		else if (command == "display") {
			monitor->getViewMonitor();
		}
	} while (command != "close");
	
	delete monitor;
	monitor = nullptr;
	return 0;
}