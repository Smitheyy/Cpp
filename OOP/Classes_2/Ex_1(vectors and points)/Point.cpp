#include "Point.h"
#include "iostream"
using namespace std;


Point::Point(double _x, double _y, double _z) { x = _x; y = _y; z = _z; }

double Point::GetX() { return x; }
double Point::GetY() { return y; }
double Point::GetZ() { return z; }
void Point::SetX(double x_value) { x = x_value; }
void Point::SetY(double y_value) { y = y_value; }
void Point::SetZ(double z_value) { z = z_value; }



