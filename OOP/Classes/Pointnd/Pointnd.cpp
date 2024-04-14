#include "Pointnd.h"


Pointnd::Pointnd(int dims) : dimensions(dims) {
	coordinates = new int[dimensions];
	count++;
}

Pointnd Pointnd::Addpoints(Pointnd p) {
	Pointnd result(dimensions);

	for (int i = 0; i < dimensions; i++) 
		result.coordinates[i] = coordinates[i] + p.coordinates[i]; 

	return result;
}


int Pointnd::count = 0;


Pointnd Addpointsg(Pointnd p1, Pointnd p2) {
	Pointnd result(p1.dimensions);

	for (int i = 0; i < p1.dimensions; i++)
		result.coordinates[i] = p1.coordinates[i] + p2.coordinates[i];

	return result;
}

Pointnd::~Pointnd() {
	delete[] coordinates;
	count--;
}