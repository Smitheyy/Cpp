#pragma once
#include "OptionMenu.h"
#include <iostream>


class DisplayListOption : public OptionMenu
{
public:
	DisplayListOption() : OptionMenu("Display the contents of your list of people\n"){}
	virtual void Execute(ListofPeople& list) override { std::cout << list; }
};

