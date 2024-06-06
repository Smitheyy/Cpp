#include "SimpleListofPeople2.h"
#include "Human.h"
#include<iostream>
using namespace std;


SimpleListofPeople2::SimpleListofPeople2(int number_of_people_c) : number_of_people(number_of_people_c), counter_of_people(0) {}
void SimpleListofPeople2::add(Human& h) {
	if (counter_of_people == number_of_people) {
		cout << "The list is full! You can't add " << h.getName() << " into it!\n";
		return;
	}

	else { 	
		people.push_back(h);
		cout << h.getName() << " has been added into the list\n";
		counter_of_people++;
	}
}

ostream& operator<<(ostream& os, SimpleListofPeople2& slp) {
	os << "Here are the people on the list:\n";
	for (int i = 0; i < slp.people.size(); i++) {
		os << (i + 1) << '.';
		slp.people[i].displayData(os);
		slp.people[i].displayClass(os);
	}

	return os;
}
