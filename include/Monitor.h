#pragma once
#include "Window.h"

class Monitor {
	int width = 80;
	int heigth = 50;
	Window window;
public:
	//Вывод изображения в консоль
	void getViewMonitor() {
		std::cout << "W + S " << window.getWidth() + window.getStep() << "\n";
		for (int i = 0; i < heigth; i++) {
			for (int j = 0; j < width; j++) {
				if (i == 0 || i == heigth - 1) {
					std::cout << "-";
				}
				else if ((i == window.getCoordinateY() && j == window.getCoordinateY()) || (i == (window.getHeigth() + window.getStep()) && j == window.getCoordinateX())) {
					for (; j <= (window.getWidth() + window.getStep()); j++) {
						std::cout << "-";
					}
					std::cout << " ";
				}
				else if ((i > 0 && i < heigth) && (j == 0 || j == width - 1)) {
					std::cout << "|";
				}
				else if ((i > window.getCoordinateY() && (j == window.getCoordinateX() || j == (window.getWidth() + window.getStep()))) && i < (window.getHeigth() + window.getStep())) {
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
		int tempo_x = window.getCoordinateX(), tempo_y = window.getCoordinateY(), tempo_step = v;
		tempo_x += v; tempo_y += v;

		if (tempo_x <= (heigth - 1) && tempo_y <= (width - 1)) {
			window.setCoordinate(tempo_x, tempo_y, tempo_step);
			std::cout << "New window coordinates: " << window.getCoordinateX() << " " << window.getCoordinateY() << std::endl;
		}
		else {
			std::cout << "Shifting to this vector is impossible!\n";
		}

	}
	void getResizeWindow(int heig, int wid) {
		int tempo_size_h = window.getHeigth(), tempo_size_w = window.getWidth();
		tempo_size_h += heig, tempo_size_w += wid;

		if ((tempo_size_h < heigth || tempo_size_h > 0) && (tempo_size_w < width || tempo_size_w > 0) && 
				(tempo_size_h + window.getCoordinateY() < 50 && tempo_size_h + window.getCoordinateX() < 80)) {
			window.setSizeWindow(heig, wid);
			std::cout << "Ноывый размер окна: высота " << window.getHeigth() << ". Ширина " << window.getWidth() << std::endl;
		}
		else {
			std::cout << "Увеличение на заданные размеры не возможно!\n";
		}
	}
};
