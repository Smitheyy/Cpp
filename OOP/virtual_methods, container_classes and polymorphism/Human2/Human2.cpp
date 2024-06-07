#include "Human2.h"
#include "Person.h"
#include<iostream>
using namespace std;


Human2::Human2(string _name) : Person(_name){}	// definition of constructor

// member function definitions
bool Human2::isStudent() { return false; }
string Human2::getName() { return name; }
void Human2::displayData(ostream& os) { os << "Name of human: " << name << '\n'; }
void Human2::displayClass(ostream& os) { os << "Your object is of an Human type\n"; }
Human2* Human2::createNew() {		// static member function
	string new_name;
	cout << "name: ";
	cin >> new_name;

	return (new Human2(new_name));
}

// friend of Human
ostream& operator<<(ostream& os, Human2& h){
	h.displayData(os);
	h.displayClass(os);

	return os;
}


