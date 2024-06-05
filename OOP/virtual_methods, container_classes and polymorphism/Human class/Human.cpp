#include "Human.h"
#include<iostream>
using namespace std;


Human::Human(string _name) { name = _name; }	// definition of constructor

// member function definitions
void Human::displayData(ostream& os) { os << "Name of human: " << name << '\n'; }
void Human::displayClass(ostream& os) { os << "Your object is of an Human type" << '\n'; }
Human* Human::createNew() {		// static member function
	string new_name;
	cout << "name: ";
	cin >> new_name;

	return (new Human(new_name));
}
	
	

ostream& operator<<(ostream& os, Human& h){
	h.displayData(os);
	h.displayClass(os);

	return os;
}


