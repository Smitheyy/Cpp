#include <iostream>
#include "Human.h"
#include "SimpleListofPeople2.h"
using namespace std;


int main()
{
    Human jack("Jack"), anne("Anne"), kacper("Kacper"), sandra("Sandra");
    SimpleListofPeople2 list(3);
    SimpleListofPeople2 list2(2);

    jack.displayData(cout);
    jack.displayClass(cout);
    
    anne.displayData(cout);
    anne.displayClass(cout);

    kacper.displayData(cout);
    kacper.displayClass(cout);
    

    cout << "----------------------------------------------------------------------\n";
    cout << "ostream\n\n";
    cout << jack;
    cout << anne;
    cout << kacper;
    cout << "End of human show\n";

    cout << "\nList presentation\n";
    list.add(jack);
    list.add(anne);
    cout << list;

    list.add(kacper);
    cout << list;
   
    list.add(sandra);
    cout << list;

    list2.add(sandra);
    cout << list2;


    return 0;
}


