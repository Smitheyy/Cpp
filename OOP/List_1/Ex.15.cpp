#include <iostream>
#include <tuple>


struct Date{

    unsigned int day;
    unsigned int month;
    unsigned int year;

};

void determineanearlierdate(Date d1, Date d2){

    if(std::tie(d1.year, d1.month, d1.day) < std::tie(d2.year, d2.month, d2.day))
        std::cout << "First date is earlier than the second!";

    else if(std::tie(d1.year, d1.month, d1.day) > std::tie(d2.year, d2.month, d2.day))
        std::cout << "Second date is earlier than the first!";

    else if(std::tie(d1.year, d1.month, d1.day) == std::tie(d2.year, d2.month, d2.day))
        std::cout << "The dates are the same date!";

    else{
        std::cout << "Error! Your input cannot be interpreted as a date!";
    }
}
