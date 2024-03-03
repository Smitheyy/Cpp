#include <iostream>
#include "Helpy.h"
using std::cout;
using std::cin;


bool KIsEven(unsigned int k) {

    if(k % 2 == 0){
        return true;
    }


    return false;
}


unsigned int CollatzAlgorithm(unsigned int k){

    cout << "\n\nAll values of k :\n";

    while(k != 1){

        cout << k << ", ";

        if(KIsEven(k)){
            k /= 2;
        }

        else {
            k = 3 * k + 1;
        }
    }


    return k;
}


int main(){
    unsigned int k;

    cout << "WELCOME TO HAILSTONE NUMBERS PROGRAM!\n\n";
    cout << "This program will introduce you to Hailstone numbers problem, also known as Collatz's problem. The program will take the value of k of your choosing and will explain the algorithm to you.\n\n\n";


    do{

        try{

            cout << "Enter the value of k: ";
            cin >> k;

        }

        catch (...){
            cout << "You have to enter a natural number for the program to work...\n";
            cout << "The program has been terminated!\n";
            break;
        }


        k = CollatzAlgorithm(k);
        cout << k << "\n\n";

        cout << "\nCollatz's algorithm takes a natural number which is k and executes said instructions:\n\n";
        cout << "While k is not equal to 1 execute{\n";
        cout << "if k is an even number then divide it by 2\n";
        cout << "else multiply k by 3 and add one to it\n";
        cout << '}' << '\n';
        cout << "\nThe problem of this algorithm is that nobody knows whether there exists a value such that the algorithm won't ever be equal to one therefore the program would be stuck in an infinite loop. So even though its rules are fairly simple nobody hasn't discovered whether such value exists, which is pretty crazy... \n\n";

    }
    while(!Helpy::ShouldProgramEnd());


    return 0;
}