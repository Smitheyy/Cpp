#pragma once
#include <vector>
#include "Person.h"

class ListofPeople2
{
private:
	std::vector<Person*> people;
	int counter_of_people;		// counts how many people were added into the list
	int number_of_people;	// its value represents the number of people that are supposed to be in the list
	int counter_of_students;	// holds info about student's position

public: // interface

	ListofPeople2(int number_of_people_c);	// constructor

	// member functions
	void add(Person* p);

	friend std::ostream& operator<<(std::ostream& os, ListofPeople2& lp);
};

