#pragma once
#include "OptionMenu.h"
#include "Human2.h"
#include "ListofPeople2.h"
#include <iostream>


class HumanOption : public OptionMenu
{
public:
	HumanOption() : OptionMenu("Add a new person onto the list\n"){}
	virtual void Execute(ListofPeople2& list) override {
		list.add(Human2::createNew());
	}
};

