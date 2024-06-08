#pragma once
#include "OptionMenu.h"
#include "Student2.h"
#include <iostream>


class StudentOption : public OptionMenu
{
public:
	StudentOption() : OptionMenu("Add a new student onto the list\n"){}
	virtual void Execute(ListofPeople& list) override{
		list.add(Student2::createNew());
	}
};