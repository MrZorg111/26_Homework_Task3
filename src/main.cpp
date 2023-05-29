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
			std::cout << "Enter the window offset vector: \n";
			std::cin >> move_vector;
			monitor->getMoveVector(move_vector);
		}
		// оманда resize запрашивает из стандартного ввода новый размер окна. ѕосле изменени€ размера сообщение с новым размером выводитс€ на экране.
		else if (command == "resize") {

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