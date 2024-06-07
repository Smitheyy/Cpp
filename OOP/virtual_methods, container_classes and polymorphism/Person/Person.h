#pragma once
#include<iostream>


class Person	// an abstract class
{
protected:
	std::string name;

public: // interface
	Person(std::string _name = " ") : name(_name){}	// constructor
	virtual ~Person() = default;	// destructor

	// member functions
	virtual void displayData(std::ostream& os) = 0;	
	virtual void displayClass(std::ostream& os) = 0;	 // pure virtual functions
	virtual std::string getName() = 0;
	virtual bool isStudent() = 0;

};

