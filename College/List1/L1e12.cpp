#include<iostream>


void ReversedArrayOfChars(char tab[], int size){

    for(int i = 0; i < size / 2; i++){

        char buff = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = buff;

    }

    for(int j = 0; j < size; j++)
        std::cout << tab[j] << ", ";

}
