#include "OptionMenu.h"
#include "HumanOption.h"
#include "StudentOption.h"
#include "DisplayListOption.h"
#include "ListofPeople2.h"
#include "Menu.h"
#include <iostream>
using namespace std;


Menu::Menu() : current_index(0) {
	options[0] = new HumanOption;
	options[1] = new StudentOption;
	options[2] = new DisplayListOption;
}

Menu::~Menu() {
	for (auto& option : options) {
		delete option;
	}
}

Menu::Menu(const Menu& menu) {
	current_index = menu.current_index;

	for (int i = 0; i < sizeof(options) / sizeof(options[0]); i++)
		options[i] = menu.options[i];
}

Menu& Menu::operator=(const Menu& menu) {
	if (this != &menu) {
		current_index = menu.current_index;

		for (auto& option : options) {
			delete option;
		}

		for (int i = 0; i < sizeof(options) / sizeof(options[0]); i++)
			options[i] = menu.options[i];
	}
	return *this;
}

void Menu::swapOptions() {
	int first_option;
	int second_option;

	cout << "Choose two options to swap (enter numbers from 1-3):\n";
	cout << "first option: ";
	cin >> first_option;

	cout << "second option: ";
	cin >> second_option;

	if (first_option > 3 || first_option <= 0 || second_option > 3 || second_option <= 0) {
		cout << "I'm sorry but you can only swap between one of the three options provided\n";
		return;
	}

	else {
		OptionMenu* buff = options[first_option - 1];
		options[first_option - 1] = options[second_option - 1];
		options[second_option - 1] = buff;
	}

}

void Menu::chooseOption(ListofPeople2& list) {
	int choice;
	cout << "Pick an option\n";

	for (int i = 0; i < sizeof(options) / sizeof(options[0]); i++)
		cout << i+1 << '.' << options[i]->Description() << '\n';
	cout << "4.Swap two options from the three above\n";

	cin >> choice;

	if (choice > 4 || choice <= 0) {
		cout << "You are trying to choose an option that is out of scope!\n";
		return;
	}

	else if (choice == 4) 
		swapOptions();
	

	else {
		current_index = choice - 1;
		options[current_index]->Execute(list);
	}
}