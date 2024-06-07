#pragma once
#include <iostream>
#include "Person.h"


class Student2 : public Person
{
private:
	int index_number;

public: // interface
	Student2(std::string name_t = " ", int index_number_t = 0);	// constructor
	virtual ~Student2() override = default;	// destructor

	// member functions
	virtual void displayData(std::ostream& os) override;
	virtual void displayClass(std::ostream& os) override;
	virtual std::string getName() override;
	virtual bool isStudent() override;
	int getIndexNumber();
	static Student2* createNew();

	// friends of Student
	friend std::ostream& operator<<(std::ostream& os, Student2& h);
};

