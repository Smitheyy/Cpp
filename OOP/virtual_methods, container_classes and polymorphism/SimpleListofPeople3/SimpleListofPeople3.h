#pragma once
#include "Human.h"
#include "Student.h"
#include <vector>
#include <iostream>


class SimpleListofPeople3
{
private:
	std::vector<Human> people;
	int counter_of_people;		// counts how many people were added into the list
	int number_of_people;	// its value represents the number of people that are supposed to be in the list
	const int number_of_students = 1;
	int position_of_student;	// its value represents the position on which the student is
	int student_index_num;	// holds index number of that one added student

public: // interface
	SimpleListofPeople3(int number_of_people_c);	// constructor
	
	// member functions
	void add(Human& h);
	void add(Student& s);\


	friend std::ostream& operator<<(std::ostream& os, SimpleListofPeople3& slp);
};

