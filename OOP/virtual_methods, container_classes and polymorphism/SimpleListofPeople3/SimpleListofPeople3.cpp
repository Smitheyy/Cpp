#include "SimpleListofPeople3.h"
#include "Human.h"
#include "Student.h"
#include<iostream>
using namespace std;


SimpleListofPeople3::SimpleListofPeople3(int number_of_people_c) : number_of_people(number_of_people_c), counter_of_people(0), student_index_num(0), position_of_student(0), position(0) {} // constructor

// member functions
void SimpleListofPeople3::add(Human& h) {
	if (counter_of_people == number_of_people) {
		cout << "The list is full! You can't add " << h.getName() << " into it!\n";
		return;
	}

	else {
		people.push_back(h);
		cout << h.getName() << " has been added into the list\n";
		counter_of_people++;
		position++;
	}
}

void SimpleListofPeople3::add(Student& s){
	static int calls = 0;
	
	if (calls == 1) {
		cout << "You can't add more than one student into your list!\n";
		return;
	}

	else if(position == number_of_people - 1) {
		do {
			cout << "Enter the position to which you would like to assign your student: ";
			cin >> position_of_student;

			if (position_of_student > number_of_people || position_of_student <= 0)
				cout << "\nThe student's position has exceeded the scope of your list! Please try again\n";
		} while (position_of_student > number_of_people || position_of_student <= 0);

		student_index_num = s.getIndexNumber();

		if (position_of_student == number_of_people)
			people.push_back((Human&)s);

		else
			people.insert(people.begin() + position_of_student - 1, (Human&)s);
		
		cout << s.getName() << " has been added into the list!\n";
		calls++;
		position++;
	}

	else {
		cout << "You can't add a student right now you can do so only when it will be the last person you add in the list, then you will be able to have it anywhere you want\n";
		return;
	}
}

// friend of SimpleListofPeople2
ostream& operator<<(ostream& os, SimpleListofPeople3& slp) {
	os << "Here are the people on the list:\n";
	for (int i = 0; i < slp.people.size(); i++) {
		if (i == slp.position_of_student - 1) {
			os << (i + 1) << '.';
			os << "Student's data:\n";
			os << "Name: " << slp.people[i].getName() << '\t' << "Index number: " << slp.student_index_num << '\n';
			os << "Your object is of an Student type\n";
		}

		else {
			os << (i + 1) << '.';
			slp.people[i].displayData(os);
			slp.people[i].displayClass(os);
		}
	}

	return os;
}
