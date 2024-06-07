#include <iostream>
#include "Human2.h"
#include "Student2.h"
#include "ListofPeople.h"
using namespace std;


int main()
{
    Human2 oliwier("Oliwier");
    Human2* fabian = Human2::createNew();
    Student2* kacper = Student2::createNew();
    Student2 milena("Milena", 113210);

    ListofPeople list(3);

    cout << *fabian;
    cout << oliwier;
    cout << *kacper;

    cout << "----------------------------------------------------------------------\n";

    list.add(fabian);
    list.add(&oliwier);

    cout << list;

    list.add(kacper);
    list.add(&milena);

    cout << list;


    delete fabian;
    delete kacper;

    return 0;
}