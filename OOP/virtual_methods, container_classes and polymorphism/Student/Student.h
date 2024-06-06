#pragma once
#include <iostream>

class Student
{
private:
	std::string name;
	int index_number;

public: // interface
	Student(std::string name_t = " ", int index_number_t = 0);	// constructor
	~Student() = default;	// destructor

	// member functions
	void displayData(std::ostream& os);
	void displayClass(std::ostream& os);
	std::string getName();
	int getIndexNumber();
	static Student* createNew();

	// friends of Student
	friend std::ostream& operator<<(std::ostream& os, Student& h);
};

