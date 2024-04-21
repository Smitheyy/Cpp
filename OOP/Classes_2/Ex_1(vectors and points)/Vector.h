#include<vector>
#include<cstdlib>
#include"Point.h"


class Vector
{
	std::vector<Point> points;

public:
	Vector operator+(Vector v);
	Vector operator-(Vector v);
	double DotProduct(Vector v);
	Vector VectorProduct(Vector v);

	void PushOntoVector(Point p);
	void DownloadVector();
	void GenerateRadnomCoordinates();
	void DisplayVector();
	void ClearVector();
	int SizeofVector();
};
