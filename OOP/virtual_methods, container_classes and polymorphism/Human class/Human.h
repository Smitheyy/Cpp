#pragma once
#include<iostream>

#pragma once
#include<iostream>


class Human
{
private:
	std::string name;

public: // interface
	Human(std::string _name = " ");	// constructor
	~Human() = default;	// destructor

	// member functions
	void displayData(std::ostream& os); 
	void displayClass(std::ostream& os);
	std::string getName();
	static Human* createNew();

	// friends of Human
	friend std::ostream& operator<<(std::ostream& os, Human& h);
};