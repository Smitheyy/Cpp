#include "ListofPeople.h"
#include "Person.h"
#include<iostream>
using namespace std;


ListofPeople::ListofPeople(int number_of_people_c) : number_of_people(number_of_people_c), counter_of_people(0), counter_of_students(0), position(0){} // constructor

// member functions
void ListofPeople::add(Person* p) {

	int position_of_student = 0;

	if (counter_of_people == number_of_people) {
		cout << "The list is full! You can't add " << p->getName() << " into it!\n";
		return;
	}

	else {

		if (!p->isStudent()) {
			people.push_back(p);
			cout << p->getName() << " has been added into the list\n";
			counter_of_people++;
			position++;
		}
		
		else if(position == number_of_people - 1 && p->isStudent()) {
			if (counter_of_students == 1) {
				std::cout << "You can't add any more students into the list because you can have only one of them and " << p->getName() << " is a student\n";
				return;
			}

			else {
				do {
					cout << "Enter the position to which you would like to assign your student: ";
					cin >> position_of_student;

					if (position_of_student > number_of_people || position_of_student <= 0)
						cout << "\nThe student's position has exceeded the scope of your list! Please try again\n";

				} while (position_of_student > number_of_people || position_of_student <= 0);

				if (position_of_student == 1)
					people.insert(people.begin(), p);

				if (position_of_student == number_of_people)
					people.push_back(p);

				else
					people.insert(people.begin() + position_of_student - 1, p);

				cout << p->getName() << " has been added into the list!\n";
				counter_of_people++;
				counter_of_students++;
				position++;
			}
		}
	
		else if (p->isStudent()) {
			cout << "You can't add a student right now, only when it will be the last person you add onto this list you may do so and place him anywhere you desire\n";
			return;
		}
	}
}

// friend of SimpleListofPeople2
ostream& operator<<(ostream& os, ListofPeople& lp) {
	os << "Here are the people on the list:\n";
	for (const auto& person : lp.people) {
		person->displayData(os);
		person->displayClass(os);
	}

	return os;
}