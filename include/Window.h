#pragma once

class Window {
	int coordinate_x = 1;
	int coordinate_y = 1;
	int step_x = 0;
	int step_y = 0;
	int width = 10;
	int heigth = 10;
public:
	//Functions that accept new parameters to class fields
	void setCoordinate(int& x, int& y) {
		coordinate_x = x; coordinate_y = y;

	}
	void setSteps(int& s_x, int& s_y) {
		step_x += s_x, step_y += s_y;
	}
	void setSizeWindow(int& h, int& w) {
		heigth = h, width = w;
	}
	//Functions that provide access to class fields
	int getCoordinateX() {
		return coordinate_x;
	}
	int getCoordinateY() {
		return coordinate_y;
	}
	int getStepX() {
		return step_x;
	}
	int getStepY() {
		return step_y;
	}
	int getWidth() {
		return width;
	}
	int getHeigth() {
		return heigth;
	}
};