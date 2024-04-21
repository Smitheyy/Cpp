#include "PhoneBook.h"
#include<iostream>
using namespace std;


int PhoneBook::DownloadCounter() { return counter; }
void PhoneBook::AddNumber(PhoneNumber number){
	
	if (counter < maximum_amount_of_numbers) {
		numbers[counter++] = number;
		cout << "A new number has been added into your phonebook!" << endl;
	}

	else {
		cout << "The phonebook is full!" << endl;
		return;
	}
}

void PhoneBook::DeleteNumber(const char* number){
	for (int i = 0; i < counter; i++) {

		if (strcmp(numbers[i].phone_number, number) == 0) {
			for (int j = i; j < counter - 1; j++) { numbers[j] = numbers[j + 1]; }
		}
		counter--;
		cout << "A phone number has been deleted from the phonebook!" << endl;
		return;
	}
	cerr << "Given phone number hasn't been found!" << endl;
}

void PhoneBook::SearchBySurname(const char* sur) {
	bool found = false;

	for (int i = 0; i < counter; i++) {

		if (strcmp(numbers[i].surname, sur) == 0) {
			cout << "The number has been found!" << numbers[i].phone_number << endl;
			found = true;
		}
	}

	if (!found)
		cerr << "Number of given surname hasn't been found!" << endl;
}