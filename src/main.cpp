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

		}
		//������� resize ����������� �� ������������ ����� ����� ������ ����. ����� ��������� ������� ��������� � ����� �������� ��������� �� ������.
		else if (command == "resize") {

		}
		//������� display ������� ������� ����������� �������� � �������. 0 � ��� ������� ��� ������� ����, 1 � � �����.
		else if (command == "display") {
			monitor->getViewMonitor();
		}
	} while (command != "close");
	return 0;
}