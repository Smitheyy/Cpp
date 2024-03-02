#include <iostream>
#include "Helpy.h"
using std::cout;
using std::cin;


void Swap(int *x, int *y) { //this function swaps the values of two integers

    *x += *y;
    *y = *x - *y;
    *x -= *y;

}


void DisplayTable(int tab[], int size_tab ){ //this function displays all elements of a table

    for(int i = 0; i < size_tab; i++){
        cout << tab[i] << ' ';

    }

}


void FillTable(int tab_1[], int tab_2[], int size_tab_1, int size_tab_2){ //this function allows the user to fill two tables with values

    cout << "\n\nYOUR FIRST TABLE:\n";

    for(int i = 0; i < size_tab_1; i++){

        cout << "Enter the " << i + 1<< " number of your  first table: ";
        cin >> tab_1[i];

    }

    cout << "\nGreat! Here are the contents of your first table!:\n";
    DisplayTable(tab_1, size_tab_1);

    cout << "\nYOUR SECOND TABLE\n";

    for(int j = 0; j < size_tab_2; j++){

        cout << "Enter the " << j + 1<< " number of your second table: ";
        cin >> tab_2[j];

    }

    cout << "\nGreat! Here are the contents of your second table!:\n";
    DisplayTable(tab_2, size_tab_2);

}


void SwapTables(int tab_1[], int tab_2[], int size_t1, int size_t2) { //this function swaps all the elements of two tables

    int size = size_t1;

    if (size_t1 == size_t2){
        for (int i = 0; i < size; i++) {
            Swap(&tab_1[i], &tab_2[i]);

        }

        cout << "\n\nFirst table after the swap:\n";
        DisplayTable(tab_1, size);

        cout << "\nSecond table after the swap\n";
        DisplayTable(tab_2, size);
        cout << "\n\n";

    }

    else{
        cout << "I'm sorry but the swap could not occur since the tables aren't the same size...\n";

    }
}


int main() {

    int number_1;
    int number_2;
    int size_tab_1;
    int size_tab_2;


    cout << "WELCOME TO CHANGE_VALUES PROGRAM!\n\n";
    cout << "INFO:\n";
    cout << "In this program you will swap the values of two integers of your choosing (you will be the one creating them and assigning them values) . The program will also explain how the algorithm works and then you will create your own two tables of integers fill it with values and you will Swap elements of these tables (for example the first element of your first table becomes the first element of your second table and so on).\n";


    do{

        cout << "\nEnter a value of the first number: ";
        cin >> number_1;    //user enters a number

        cout << "\nEnter a value of the second number: ";
        cin >> number_2;    //user enters a second number

        cout << "\nHere are your numbers before the swap:\n";
        cout << "number1 = " << number_1 << "  |  number2 = " << number_2 << '\n';


        cout << "\nSWAP!\n\n";

        cout << "EXPLANATION OF SWAP ALGORITHM:\n";
        cout << "number1 = number1 + number2\n";
        cout << "1.Sum - here the program creates a sum of number1 and number two and stores the result in number1\n\n";
        cout << "number2 = number1 - number2\n";
        cout << "2.First Subtraction - in the next phase of the algorithm the program subtracts number1 (its new sum value) with number2 and stores the result (which is the initial value of number1 before the first step) in number1\n\n";
        cout << "number1 = number1 - number2\n";
        cout << "3.Second subtraction - the concept is the same as in the first subtraction it just stores the result (which is the initial value of number2) in number2\n\n";
        Swap(&number_1, &number_2);

        cout << "Here are your numbers after the swap:\n";
        cout << "number1 = " << number_1 << "  |  number2 = " << number_2 << "\n\n";

        cout << "Okay, now let's move on to tables. In order to create a table you need to determine its size first\n";
        cout << "NOTE: if you would like to swap the elements of two tables then keep in mind, that they've got to be the same size!\n";
        cout << "\nEnter the size of your first table: ";
        cin >> size_tab_1; //user enters a size of the first table

        cout << "Enter the size of your second table: ";
        cin >> size_tab_2; //user enters the size of the second table


        int *tab_1 =  new int[size_tab_1];
        int *tab_2 = new int[size_tab_2]; //Here two tables are created dynamically

        cout << "\nGreat! Now let's fill these tables with values!\n";
        FillTable(tab_1, tab_2, size_tab_1, size_tab_2); //fills both of these tables with integers


        SwapTables(tab_1, tab_2, size_tab_1, size_tab_2 );  //swaps the elements between two tables


        delete[] tab_1;
        delete[] tab_2; //deletes the tables
    }
    while(!Helpy::ShouldProgramEnd()); //this method is responsible for asking the user whether the program should end or not


    return 0;
}