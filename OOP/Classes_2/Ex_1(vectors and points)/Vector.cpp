#include "Vector.h"
#include "Point.h"
#include<iostream>
using namespace std;


Vector Vector::operator+(Vector v) {
	if (points.size() != v.SizeofVector()) {
		cout << "Vectors have to have the same number of points in order to be added!";
		exit(1);
	}
		

	Vector result;

	for (int i = 0; i < points.size(); i++)
		result.PushOntoVector(Point(points[i].GetX() + v.points[i].GetX(), points[i].GetY() + v.points[i].GetY(), points[i].GetZ() + v.points[i].GetZ()));

	return result;
	
}

Vector Vector::operator-(Vector v) {
	if (points.size() != v.SizeofVector()) {
		cout << "Vectors have to have the same number of points in order to be subtracted!";
		exit(1);
	}
		

	
	Vector result;

	for (int i = 0; i < points.size(); i++)
		result.PushOntoVector(Point(points[i].GetX() - v.points[i].GetX(), points[i].GetY() - v.points[i].GetY(), points[i].GetZ() - v.points[i].GetZ()));

	return result;
	
}

double Vector::DotProduct(Vector v) {
	if (points.size() != v.SizeofVector()) {
		cout << "Vectors have to have the same number of points in order to be multiplied!";
		exit(1);
	}
		

	
	double dot_product = 0;

	for (int i = 0; i < points.size(); i++) {
		dot_product += (points[i].GetX() * v.points[i].GetX()) +
			(points[i].GetY() * v.points[i].GetY()) +
			(points[i].GetZ() * v.points[i].GetZ());
	}

	return dot_product;
	
}

Point Vector::VectorProduct(Vector v) {

	if (points.size() != 1 || v.SizeofVector() != 1) {
		cout << "Vectors have to have the same number of points in order to be multiplied!";
		exit(1);
	}
		

	Point p(0, 0, 0);

	p.SetX((points[0].GetY() * v.points[0].GetZ()) - (points[0].GetZ() * v.points[0].GetY()));
	p.SetY((points[0].GetZ() * v.points[0].GetX()) - (points[0].GetX() * v.points[0].GetZ()));
	p.SetZ((points[0].GetX() * v.points[0].GetY()) - (points[0].GetY() * v.points[0].GetX()));

	return p;
}

void Vector::PushOntoVector(Point p) { points.push_back(p); }
void Vector::ClearVector() { points.clear(); }
int Vector::SizeofVector() { return (points.size()); };
void Vector::DownloadVector() {
	double x, y, z;
	cout << "Enter values of your 3D point(x, y and z):";
	cin >> x >> y >> z;
	PushOntoVector(Point(x, y, z));
}

void Vector::GenerateRadnomCoordinates() {
	int val;
	srand(time(NULL));
	cout << "How many points would you like to randomly generate? Enter a value:";
	cin >> val;

	for (int i = 0; i < val; i++)
		PushOntoVector(Point(rand() % 100, rand() % 100, rand() % 100));
}

void Vector::DisplayVector() {
	cout << "Here is your vector:" << endl;
	for (int i = 0; i < points.size(); i++)
		cout << 'P' << i + 1 << '(' << points[i].GetX() << ',' << points[i].GetY() << ',' << points[i].GetZ() << ')' << endl;
}