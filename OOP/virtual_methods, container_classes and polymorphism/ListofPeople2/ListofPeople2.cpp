#include "ListofPeople2.h"
#include "Person.h"
#include<iostream>
using namespace std;


ListofPeople2::ListofPeople2(int number_of_people_c) : number_of_people(number_of_people_c), counter_of_people(0) {} // constructor

// member functions
void ListofPeople2::add(Person* p) {
	static int counter_of_students = 0;
	if (counter_of_people == number_of_people) {
		cout << "The list is full! You can't add " << p->getName() << " into it!\n";
		return;
	}

	else {
		if (p->isStudent()) {
			if (counter_of_students == 1) {
				std::cout << "You can't add any more students into the list because you can have only one of them and " << p->getName() << " is a student\n";
				return;
			}

			else {
				people.push_back(p);
				cout << p->getName() << " has been added into the list\n";
				counter_of_people++;
				counter_of_students++;
			}
		}

		else {
			people.push_back(p);
			cout << p->getName() << " has been added into the list\n";
			counter_of_people++;
		}
	}
}

// friend of SimpleListofPeople2
ostream& operator<<(ostream& os, ListofPeople2& lp) {
	os << "Here are the people on the list:\n";
	for (const auto& person : lp.people) {
		person->displayData(os);
		person->displayClass(os);
	}

	return os;
}