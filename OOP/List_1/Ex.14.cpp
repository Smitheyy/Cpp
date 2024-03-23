#include <iostream>
#include <cmath>


int isfigureatriangle(double a, double b, double c){

    if(a < 0 || b < 0 || c < 0 || a + b <= c || a + c <= b || b + c <= a)
        return 0;


    return 1;

}

void determinetriangletype(double a, double b, double c){

    if(isfigureatriangle(a, b, c) == 1){

        if(a == b && a == c)
            std::cout << "This triangle is equilateral!";

        else if(pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) ==
                                                                                                    pow(a, 2))
            std::cout << "This triangle is rectangular!";

        else if(a == b || b == c || c == a)
            std::cout << "This triangle is isosceles!";

        else{
            std::cout << "This triangle is scalene!";
        }

    }

    else{
        std::cout << "These co-ordinates won't make a triangle!";
    }

}
