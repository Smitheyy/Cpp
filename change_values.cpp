#include <iostream>
#include "Helpy.h"
using std::cout;
using std::cin;


void Swap(int *x, int *y) {

    cout << "number1 = number1 + number2;\n";
    cout << "number2 = number1 - number2\n";
    cout << "number1 = number1 - number2\n\n\n";

    cout << "In the first line adds both of the numbers together and stores the result as the first number\n\n";
    *x += *y;

    cout << "The result:\n";
    cout << "number1 = " << *x << " and number2 = " << *y << '\n';

    cout << "The second line subtracts your previous result from number2 and stores the result in number2(that's the first swap)\n\n";
    *y = *x - *y;

    cout << "The result:\n";
    cout << "number 1 = " << *x << " and number2 = " << *y << '\n';

    cout << "The third line subtracts number1 from number2 and stores the result in number1(that's the second swap)\n\n";
    *x -= *y;

    cout << "FINAL RESULT! Here are your numbers after the swap:\n";
    cout << "number1 = " << *x << " and number2 = " << *y << "\n\n";

}


void DisplayTable(int tab[], int size_tab ){

    for(int i = 0; i < size_tab; i++){
        cout << tab[i] << ' ';
    }

}


void FillTable(int tab_1[], int tab_2[], int size_tab_1, int size_tab_2){

    cout << "\nYOUR FIRST TABLE:\n";
    for(int i = 0; i < size_tab_1; i++){
        cout << "\nEnter the " << i + 1<< " number of your table: ";
        cin >> tab_1[i];
    }

    cout << "\nGreat! here are the contents of your first table:\n";
    DisplayTable(tab_1, size_tab_1);

    cout << "\n\nYOUR SECOND TABLE\n";
    for(int j = 0; j < size_tab_2; j++){

        cout << "\nEnter the " << j + 1<< " number of your table: ";
        cin >> tab_2[j];

    }

    cout << "\nGreat! here are the contents of your second table:\n";
    DisplayTable(tab_2, size_tab_2);

}


int main() {

    int number_1;
    int number_2;
    int size_tab_1;
    int size_tab_2;


    cout << "WELCOME TO CHANGE_VALUES PROGRAM!\n\n\n";
    cout << "INFO:\n";
    cout << "In this program you will swap determined (by yourself) values of two integers . The program will also explain how the algorithm works and then you will create your own tables of integers fill it with values and you will Swap the values of two tables.\n";


    do{

        cout << "Enter a value of the first number: ";
        cin >> number_1;

        cout << "\nEnter a value of the second number: ";
        cin >> number_2;

        cout << "\nHere are your numbers before the swap:\n";
        cout << "number1 = " << number_1 << " and number2 = " << number_2 << '\n';

        cout << "\nSWAP!\n";
        Swap(&number_1, &number_2);


        cout << "Enter the size of your first table: ";
        cin >> size_tab_1;

        cout << "Enter the size of your second table: ";
        cin >> size_tab_2;

        int *tab_1 =  new int[size_tab_1];
        int *tab_2 = new int[size_tab_2];

        FillTable(tab_1, tab_2, size_tab_1, size_tab_2);

        delete[] tab_1;
        delete[] tab_2;
    }
    while(!Helpy::ShouldProgramEnd());


    return 0;
}
