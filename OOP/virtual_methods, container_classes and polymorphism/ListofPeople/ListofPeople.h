#pragma once
#include<iostream>
#include<vector>
#include "Person.h"


class ListofPeople
{
private:
	std::vector<Person*> people;
	int counter_of_people;		// counts how many people were added into the list
	const int number_of_people;	// its value represents the number of people that are supposed to be in the list
	int position;	// tracks a current position of added objects

public: // interface

	ListofPeople(int number_of_people_c);	// constructor

	// member functions
	void add(Person* p);

	friend std::ostream& operator<<(std::ostream& os, ListofPeople& lp);
};

