#pragma once
#include "Window.h"

class Monitor {
	int width = 80;
	int heigth = 50;
	Window window;
public:
	//����� ����������� � �������
	void getViewMonitor() {
		for (int i = 0; i < heigth; i++) {
			for (int j = 0; j < width; j++) {
				if (i == 0 || i == heigth - 1) {
					std::cout << "-";
				}
				else if ((i == window.getCoordinateY() || i == window.getHeigth()) && j == window.getCoordinateX()) {
					for (; j <= window.getWidth(); j++) {
						std::cout << "-";
					}
					std::cout << " ";
				}
				else if ((i > 0 && i < heigth - 1) && (j == 0 || j == width - 1)) {
					std::cout << "|";
				}
				else if ((j > window.getCoordinateY() && j < window.getHeigth() + j) && (i == window.getCoordinateX() || i == window.getWidth())) {
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
/*
* ((i > window.getCoordinateY() || i < window.getHeigth()) && (j == window.getCoordinateX() || j == window.getWidth())))
  
  
  j0 j1 j2 j3 j4 j5 j6 j7 j8 j9 j10								
i0 -  -  -	-  -  -  -  -  -  -  -					w = 5
i1 |  -  -  -  -  -				  |					h = 6
i2 |  |           |               |
i3 |  |           |               |
i4 |  |           |               |
i5 |  |           |               | 
i6 |  -  -  -  -  -               |
i7 |                              |
i8 |                              |
i9 |                              |
i10-  -  -  -  -  -  -  -  -  -  - 

  j0 j1 j2 j3 j4 j5 j6 j7 j8 j9 j10
i0 -  -  -	-  -  -  -  -  -  -  -					w = 5
i1 |  -  -  -  -  -				  |					h = 6
i2 |  |           |               |
i3 |  |           |               |
i4 |  |           |               |
i5 |  |           |               |
i6 |  -  -  -  -  -               |
i7 |                              |
i8 |                              |
i9 |                              |
i10-  -  -  -  -  -  -  -  -  -  -
j == window.getCoordinateY() || (i == window.getHeigth() && j == window.getCoordinateX())


*/