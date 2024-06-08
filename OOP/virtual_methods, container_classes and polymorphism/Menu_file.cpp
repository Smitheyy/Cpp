#include <iostream>
#include "ListofPeople.h"
#include "Menu.h"
#include "Human2.h"
using namespace std;


int main() {

	ListofPeople2 list(4);

	Menu menu;
	char exit_loop = 'q';

	while (exit_loop != 'e') {
		menu.chooseOption(list);
		cout << "Do you want to close the menu? (enter e in order to close it): ";
		cin >> exit_loop;
	}

	cout << list;

	return 0;
}