#include <iostream>


float maxoffloattable(float tab[], int size){

    float max = tab[0];


    for(int i = 0; i < size; i++){

        if(max < tab[i])
            max = tab[i];

    }

    return max;

}

float minoffloattable(float tab[], int size){

    float min = tab[0];


    for(int i = 0; i < size; i++){

        if(min > tab[i])
            min = tab[i];

    }

    return min;

}

void dislayfloattable(float tab[], int size){

    for(int i = 0; i < size; i++)
        std::cout <<  tab[i] << "\t";

}
