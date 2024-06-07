#include "Student2.h"
#include "Person.h"
#include <iostream>
using namespace std;


Student2::Student2(string name_t, int index_number_t) : Person(name_t), index_number(index_number_t) {}	// constructor

// member functions
void Student2::displayData(ostream& os) {
	os << "Student's data:\n";
	os << "Name: " << name << '\t' << "Index number: " << index_number << '\n';
}

void Student2::displayClass(ostream& os) { os << "Your object is of an Student type\n"; }

string Student2::getName() { return name; }
bool Student2::isStudent() { return true; }
int Student2::getIndexNumber() { return index_number; }

Student2* Student2::createNew() {
	string new_name;
	int new_index_number;

	cout << "name: ";
	cin >> new_name;

	cout << "index number: ";
	cin >> new_index_number;

	return (new Student2(new_name, new_index_number));
}

// friend of Student
ostream& operator<<(ostream& os, Student2& s) {
	s.displayData(os);
	s.displayClass(os);

	return os;
}