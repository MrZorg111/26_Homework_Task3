#pragma once

class Window {
	int coordinate_x = 1;
	int coordinate_y = 1;
	int step = 0;
	int width = 10;
	int heigth = 10;
public:
	void setCoordinate(int& x, int& y, int& s) {
		coordinate_x = x; coordinate_y = y, step += s;

	}
	void setSizeWindow(int& h, int& w) {
		heigth += h, width += w;
	}
	int getCoordinateX() {
		return coordinate_x;
	}
	int getCoordinateY() {
		return coordinate_y;
	}
	int getStep() {
		return step;
	}
	int getWidth() {
		return width;
	}
	int getHeigth() {
		return heigth;
	}
};