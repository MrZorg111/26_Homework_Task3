#include <iostream>
#include "Monitor.h"
#include "UserCommand.h"

int main() {
	Monitor* monitor = new Monitor();

	do {
		std::cout << "Enter command:\n";
		std::cin >> command;
		//������� move ��������� ������, �� ������� ���� �������� ���� �� ������. ��������� � ������ ������������ ���� ���������� �� ������.
		if (command == "move") {
			std::cout << "Enter the window offset vector: \n";
			std::cin >> move_vector;
			monitor->getMoveVector(move_vector);
		}
		//������� resize ����������� �� ������������ ����� ����� ������ ����. ����� ��������� ������� ��������� � ����� �������� ��������� �� ������.
		else if (command == "resize") {

		}
		//������� display ������� ������� ����������� �������� � �������. 0 � ��� ������� ��� ������� ����, 1 � � �����.
		else if (command == "display") {
			monitor->getViewMonitor();
		}
	} while (command != "close");
	
	delete monitor;
	monitor = nullptr;
	return 0;
}