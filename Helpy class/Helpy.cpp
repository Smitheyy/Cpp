#include <iostream>
#include "Helpy.h"


bool Helpy::ShouldProgramEnd() {
    char finished;

    std::cout << "Do you want to terminate the program?(press 't' to terminate): ";
    std::cin >> finished;

    if(tolower(finished) == 't')
        return true;

    return false;

}

void Helpy::SwapValOfInts(int *x, int *y) {
    *x += *y;
    *y = *x - *y;
    *x -= *y;
}