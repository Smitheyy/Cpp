#pragma once
#include "Human.h"
#include <vector>
#include <iostream>


class SimpleListofPeople2
{
private:
	std::vector<Human> people;	
	int counter_of_people;		// counts how many people were added into the list
	int number_of_people;	// tells how many people are supposed to be in the list

public: // interface
	SimpleListofPeople2(int number_of_people_c);	// constructor

	void add(Human& h);
	friend std::ostream& operator<<(std::ostream& os, SimpleListofPeople2& slp);
};


