#pragma once
#include "Window.h"

class Monitor {
	int width = 80;
	int heigth = 50;
	Window window;
public:
	//Вывод изображения в консоль
	void getViewMonitor() {
		for (int i = 0; i < heigth; i++) {
			for (int j = 0; j < width; j++) {
				if (i == 0 || i == heigth - 1) {
					std::cout << "-";
				}
				else if (i == window.getCoordinateX() && j == window.getCoordinateY() || (i == window.getHeigth() && j == window.getCoordinateX())) {
					for (j -= 1; j < window.getWidth(); j++) {
						std::cout << "-";
					}
				}
				else if (((i > 0 || i < heigth -1) && (j == 0 || j == width - 1)) || ((i > window.getCoordinateX() && i < window.getHeigth()) && (j == window.getCoordinateY() || j == window.getWidth()))) {
					std::cout << "|";
				}
				else {
					std::cout << " ";
				}
			}
			std::cout << std::endl;
		}
	}
	void getMoveVector(int v) {
		int tempo_x = window.getCoordinateX(), tempo_y = window.getCoordinateY();
		tempo_x += v; tempo_y += v;

		if (tempo_x <= (heigth - 1) && tempo_y <= (width - 1)) {
			window.setCoordinate(tempo_x, tempo_y);
			std::cout << "New window coordinates: " << window.getCoordinateX() << " " << window.getCoordinateY() << std::endl;
		}
		else {
			std::cout << "Shifting to this vector is impossible!\n";
		}

	}
};