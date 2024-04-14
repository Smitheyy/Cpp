#include<iostream>


class Point2D
{
private:
	int x;
	int y;

public:
	Point2D(int _x, int _y);


	inline void Displaycoordinates() { std::cout << "P(" << x << ',' << y << ')'; }
	void Initializexyrandomly();
	void Reflectionfromgivenpoint(int center_x, int center_y);
	Point2D Addpoints(Point2D p);
};

