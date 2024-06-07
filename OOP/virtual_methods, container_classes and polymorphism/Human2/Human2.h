#pragma once
#include<iostream>
#include "Person.h"

class Human2 : public Person
{
public: // interface
	Human2(std::string _name = " ");	// constructor
	virtual ~Human2() override= default;	// destructor

	// member functions
	virtual void displayData(std::ostream& os) override; 
	virtual void displayClass(std::ostream& os) override;
	virtual std::string getName() override;
	virtual bool isStudent() override;
	static Human2* createNew();

	// friends of Human
	friend std::ostream& operator<<(std::ostream& os, Human2& h);
};