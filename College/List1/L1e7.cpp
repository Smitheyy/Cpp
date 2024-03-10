#include<iostream>


void CompareIntegersABC(int a, int b, int c){
    int max_value = a;

    if(max_value < b){

        max_value = b;
        std::cout << "Max value is b which is equal to: " << max_value << '\n';

        if(max_value < c){

            max_value = c;
            std::cout << "Max value is c which is equal to: " << max_value << '\n';

        }
    }

    else if(max_value < c){

        max_value = c;
        std::cout << "Max value is c which is equal to: " << max_value << '\n';

    }


    else if(max_value == b && max_value == c)
        std::cout << "There are no max values a, b and c are equal to: " << max_value << '\n';

    else if(max_value == b || max_value == c)
        std::cout << "There are two max values equal to: " << max_value << '\n';

    else{
        std::cout << "Max value is a which is equal to: " << max_value << '\n';
    }
}
