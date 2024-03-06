#include<iostream>
#include<cmath>
#include "Helpy.h"


int main(){
    double a = 0;
    double b = 0;
    double  hypotenuse;


    do{

        std::cout << "Enter the value of a: ";
        std::cin >> a;

        std::cout << "Enter the value of b: ";
        std::cin >> b;

        hypotenuse = pow(a, 2) + pow(b, 2);
        hypotenuse = sqrt(hypotenuse);

        std::cout << "The value of hypotenuse is equal to: " << hypotenuse << '\n';

    }while(!Helpy::ShouldProgramEnd());


    return 0;
}