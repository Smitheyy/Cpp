#include <iostream>


struct Date{

    unsigned int day;
    unsigned int month;
    unsigned int year;

};

void determineanearlierdate(Date d1, Date d2){

    if(d1.year < d2.year)
        std::cout << "First date is earlier than the second!";


    else if(d1.year > d2.year)
        std::cout << "Second date is earlier than the first!";

    else{

        if(d1.month < d2.month)
            std::cout << "First date is earlier than the second!";

        else if(d1.month > d2.month)
            std::cout << "Second date is earlier than the first!";

        else{

            if(d1.day < d2.day)
                std::cout << "First date is earlier than the second!";

            else if(d1.day > d2.day)
                std::cout << "Second date is earlier than the first!";

            else{
                std::cout << "These dates are the same date!";
            }
        }
    }
}
