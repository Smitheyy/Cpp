#include "Student.h"
#include <iostream>
using namespace std;


Student::Student(string name_t, int index_number_t) : name(name_t), index_number(index_number_t) {}	// constructor

// member functions
void Student::displayData(ostream& os){
	os << "Student's data:\n";
	os << "Name: " << name << '\t' << "Index number: " << index_number << '\n';
}

void Student::displayClass(ostream& os) { os << "Your object is of an Student type\n"; }

std::string Student::getName() { return name; }
int Student::getIndexNumber() { return index_number; }

Student* Student::createNew() {
	string new_name;
	int new_index_number;

	cout << "name: ";
	cin >> new_name;

	cout << "index number: ";
	cin >> new_index_number;

	return (new Student(new_name, new_index_number));
}

// friend of Student
ostream& operator<<(ostream& os, Student& s) {
	s.displayData(os);
	s.displayClass(os);

	return os;
}