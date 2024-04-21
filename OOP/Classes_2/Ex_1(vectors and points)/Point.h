#pragma once
class Point
{
	double x;
	double y;
	double z;

public:
	Point(double _x, double _y, double _z);
	double GetX();
	double GetY();
	double GetZ();
	void SetX(double x_value);
	void SetY(double y_value);
	void SetZ(double z_value);
};

