#pragma once
#include "OptionMenu.h"
#include "ListofPeople.h"


class Menu
{
private:
	OptionMenu* options[3];
	int current_index;

public:
	Menu();
	Menu(const Menu& menu);
	~Menu();

	Menu& operator=(const Menu& menu);
	void chooseOption(ListofPeople& list);
	void swapOptions();

};

