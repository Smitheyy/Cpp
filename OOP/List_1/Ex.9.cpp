#include <iostream>


void displaydigittriangle(){

    for(int i = 1; i <= 9; i++){

        for(int j = 1; j <= i; j++){

            std::cout << i;
        }

        std::cout << std::endl;
    }
}
