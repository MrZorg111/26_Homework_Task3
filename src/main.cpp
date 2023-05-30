#include <iostream>
#include "Monitor.h"
#include "UserCommand.h"

int main() {
	Monitor* monitor = new Monitor();

	do {
		std::cout << "Enter command:\n";
		std::cin >> command;
		//Команда move принимает вектор, на который надо сместить окно на экране. Сообщение с новыми координатами окна появляется на экране.
		if (command == "move") {
			std::cout << "Enter the window offset vector: \n";
			std::cin >> move_vector;
			monitor->getMoveVector(move_vector);
		}
		//Команда resize запрашивает из стандартного ввода новый размер окна. После изменения размера сообщение с новым размером выводится на экране.
		else if (command == "resize") {
			std::cout << "Введите параметры изменения размера.\n Высота: ";
			std::cin >> size_heigth_window;
			std::cout << "Ширина \n";
			std::cin >> size_width_window;
			monitor->getResizeWindow(size_heigth_window, size_width_window);
		}
		//Команда display выводит текущее изображение монитора в консоль. 0 — это пиксель вне области окна, 1 — с окном.
		else if (command == "display") {
			monitor->getViewMonitor();
		}
	} while (command != "close");
	
	delete monitor;
	monitor = nullptr;
	return 0;
}