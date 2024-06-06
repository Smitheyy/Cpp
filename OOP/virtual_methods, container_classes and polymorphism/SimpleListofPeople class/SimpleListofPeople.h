#pragma once
#include "Human.h"
#include <iostream>


class SimpleListofPeople
{
private:
	Human people[2];	// two personas
	int number_of_people;

public: // interface
	SimpleListofPeople();	// constructor

	void add(const Human& h);
	friend std::ostream& operator<<(std::ostream& os, SimpleListofPeople& slp);
};

