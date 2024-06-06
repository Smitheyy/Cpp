#include "SimpleListofPeople.h"
#include "Human.h"
#include <iostream>
using namespace std;


SimpleListofPeople::SimpleListofPeople() : number_of_people(0){}	// default constructor

// member function
void SimpleListofPeople::add(const Human& h) {
	if (number_of_people >= 2) {
		cout << "The list is full! You can't add any more people into it!\n";
		return;
	}

	else {
		people[number_of_people++] = h;
	}
}

// friend of SimpleListofPeople
ostream& operator<<(ostream& os, SimpleListofPeople& slp) {
	os << "Here are the people on the list:\n";
	for (int i = 0; i < 2; i++) {
		os << (i + 1) << '.';
		slp.people[i].displayData(os);
		slp.people[i].displayClass(os);
	}

	return os;
}
