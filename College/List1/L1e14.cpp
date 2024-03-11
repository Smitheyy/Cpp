#include<iostream>
#include<cmath>


void DetermineTriangleType(float a, float b, float c){

    if(a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a){
        std::cout << "You can't build a triangle with given side values!\n";
    }

    else{

        if(a == b && b == c)
            std::cout << "Your triangle is equilateral!\n";

        else if(pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2))
            std::cout << "Your triangle is rectangular!\n";

        else if(a == b || a == c || b == c)
            std::cout << "Your triangle is isosceles!\n";

        else{
            std::cout << "Your triangle is scalene!\n";
        }
    }

}
