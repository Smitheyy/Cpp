#include <iostream>
#include "L1e1.cpp"
#include "L1e2.cpp"
#include "L1e3and4.cpp"


int main() {

    unsigned int decision = 0;


    std::cout << "Choose a program that you would like to run:\n";
    std::cout << "1.Hello world x 1\n";
    std::cout << "2.Hello world x 13\n";
    std::cout << "3.Zwiekszacz\n";
    std::cout << "4.Zwiekszacz v 2.0\n";
    std::cout << "Enter your choice here: ";
    std::cin >> decision;
    std::cout << '\n';


    switch(decision){
        case 1:
            HelloWorld();
            break;

        case 2:
            HelloWorldForLoop();
            break;

        case 3:
            int number;

            std::cout << "Enter an integer value: ";
            std::cin >> number;

            number = Zwiekszacz(number);

            std::cout << "\nYour number got incremented! This is the result: " << number << '\n';
            break;

        case 4:
            for(int i = 0; i < 17; i++){
                std::cout << "Argument: " << i << "\tZwiekszacz: " << Zwiekszacz(i) << '\n';
            }

            break;

        default:
            std::cout << "You have to enter a positive natural number in order to submit your answer!\n";
            break;
    }

    return 0;

}
