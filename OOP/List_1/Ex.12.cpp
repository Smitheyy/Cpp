#include <iostream>


void reverseastring(char string[], int size){

    for(int i = 0; i < size / 2; i++){

        char buff = string[i];
        string[i] = string[size - i - 1];
        string[size - i - 1] = buff;

    }
}

void displaystring(char tab[], int size){

    for(int i = 0; i < size; i++)
        std::cout << tab[i] << '\t';
}
