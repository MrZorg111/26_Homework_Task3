#pragma once
#include "Window.h"
#include "UserCommand.h"

class Monitor {
	int width = 80;
	int heigth = 50;
	Window window;
public:
	//Image output to the console
	void getViewMonitor() {
		for (int i = 0; i < heigth; i++) {
			for (int j = 0; j < width; j++) {
				if (i == 0 || i == heigth - 1) {
					std::cout << "-";
				}
				else if ((i == window.getCoordinateY() && j == window.getCoordinateX()) || (i == (window.getHeigth() + window.getStepY()) && j == window.getCoordinateX())) {
					for (j + 1; j <= (window.getWidth() + window.getStepX()); j++) {
						std::cout << "-";
					}
					j -= 1;
				}
				else if ((i > 0 && i < heigth) && (j == 0 || j == width - 1)) {
					std::cout << "|";
				}
				else if ((i > window.getCoordinateY() && (j == window.getCoordinateX() || (j == (window.getWidth() + window.getStepX()))) && i < (window.getHeigth() + window.getStepY()))) {
					std::cout << "|";
				}
				else {
					std::cout << " ";
				}
			}
			std::cout << std::endl;
		}
	}
	//The function of moving the window on the monitor
	void getMoveVector(int v_x, int v_y) {
		int tempo_x = window.getCoordinateX(), tempo_y = window.getCoordinateY();
		tempo_x += v_x; tempo_y += v_y;

		if ((tempo_x > 0 && tempo_x + window.getWidth() < width) && (tempo_y > 0 && tempo_y + window.getHeigth() < heigth)) {
			window.setCoordinate(tempo_x, tempo_y);
			window.setSteps(v_x, v_y);
			std::cout << "New window coordinates: " << window.getCoordinateX() << " " << window.getCoordinateY() << std::endl;
		}
		else {
			std::cout << "Shifting to this vector is impossible!\n";
		}

	}
	//Window resizing function
	void getResizeWindow(int heig, int wid) {
		int tempo_size_h = window.getHeigth(), tempo_size_w = window.getWidth();
		tempo_size_h = heig, tempo_size_w = wid;

		if ((tempo_size_h > 2 && tempo_size_h < heigth - 1) && (tempo_size_w > 2 && tempo_size_w < width - 1) && 
				(tempo_size_h + window.getCoordinateY() < 50 && tempo_size_h + window.getCoordinateX() < 80)) {
			window.setSizeWindow(heig, wid);
			std::cout << "New window size: height " << window.getHeigth() << ". Width " << window.getWidth() << std::endl;
		}
		else {
			std::cout << "It is not possible to increase by the specified dimensions!\n";
		}
	}
};
