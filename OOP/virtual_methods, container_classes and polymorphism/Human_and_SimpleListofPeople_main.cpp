#include <iostream>
#include "Human.h"
#include "SimpleListofPeople.h"
using namespace std;


int main()
{
    Human jack("Jack"), anne("Anne");
    SimpleListofPeople list;

    jack.displayData(cout);
    jack.displayClass(cout);

    anne.displayData(cout);
    anne.displayClass(cout);
    cout << "----------------------------------------------------------------------\n";

    cout << jack;
    cout << anne;
    cout << "End of human show\n";

    Human* check = Human::createNew();
    list.add(jack);
    list.add(anne);
    list.add(*check);

    cout << list;


    return 0;
}