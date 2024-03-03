#include <iostream>
#include "Helpy.h"
using std::cout;
using std::cin;


int main() {

    int sum = 0;
    int amount = 0;
    int i, j, k;   //these variables only control for loops


    cout << "WELCOME TO ARITHMETIC AVERAGE!\n\n";
    cout << "Note section:\n";
    cout << "In this program you will be able to create your own table of numbers and count the sum of all of its contents and also their average: \n";


    do{  //the actual program

        cout << "Enter the amount of numbers in order to create your table of numbers on which you will be working on(Enter a number to submit your answer): ";
        cin >> amount;


        if (amount == 0) {
            cout << "So you have chosen to do nothing huh?\n";
            cout << "It makes no sense to determine the sum and count the mean of 0 numbers, right?" << '\n';
            cout << "The program has been terminated!\n";
            break;
        }

        if (amount < 0) {
            cout << "You have to enter positive numbers only!\n";
            cout << "The program has been terminated!\n";
            break;
        }


        int* tab = new int[amount];   //this line dynamically creates an array of integers based on the given amount by the user


        for (i = 0; i < amount; i++) {    //this loop allows the user to fill an array with numbers

            cout << "Enter the " << (i + 1) << " value: ";
            cin >> tab[i];

        }


        cout << "Here is your array: " << '\n';

        for (k = 0; k < amount; k++) {   //this loop displays an array onto the screen
            cout << tab[k] << '\n';
        }


        for (j = 0; j < amount; j++) {    //this loop calculates the sum of all the numbers in the array
            sum += tab[j];
        }

        cout << "Calculations:\n";
        cout << "The sum of all the numbers of your list is equal to " << sum << '\n';
        cout << "The average of sum is equal to " << static_cast<float>(sum) / static_cast<float>(amount) << '\n';  //this line calculates the average

        sum = 0;

        delete[] tab;
    }
    while(!Helpy::ShouldProgramEnd());


    return 0;
}