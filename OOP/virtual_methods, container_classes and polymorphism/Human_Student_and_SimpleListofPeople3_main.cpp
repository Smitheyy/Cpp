#include <iostream>
#include "Human.h"
#include "SimpleListofPeople3.h"
using namespace std;


int main()
{
    Human fabian("Fabian"), oliwier("Oliwier");
    Student* kacper = Student::createNew();
    Student milena("Milena", 113210);

    SimpleListofPeople3 list(3);

    cout << fabian;
    cout << oliwier;
    cout << *kacper;

    cout << "----------------------------------------------------------------------\n";

    list.add(fabian);
    list.add(oliwier);

    cout << list;

    list.add(*kacper);
    list.add(milena);

    cout << list;


    delete kacper;


    return 0;
}