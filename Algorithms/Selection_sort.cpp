#include<iostream>


void selectionsort(int tab[], int size){

    for(int i = 0; i < (size - 1); i++){
        int min_pos = i;

        for(int j = i+1; j < size ;j++){

            if(tab[j] < tab[min_pos])
                min_pos = j;
        }

        if(min_pos != i){

            int buffer = tab[i];
            tab[i] = tab[min_pos];
            tab[min_pos] = buffer;

        }
    }
}

void displaytab(int tab[], int size){

    for(int i = 0; i < size; i++)
        std::cout << tab[i] << ' ';
}



