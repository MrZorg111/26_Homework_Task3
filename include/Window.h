#pragma once

class Window {
	int coordinate_x = 1;
	int coordinate_y = 1;
	int width = 10;
	int heigth = 10;
public:
	int getCoordinateX() {
		return coordinate_x;
	}
	int getCoordinateY() {
		return coordinate_y;
	}
	int getWidth() {
		return width;
	}
	int getHeigth() {
		return heigth;
	}
};