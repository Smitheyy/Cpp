#include<iostream>
#include<string>


void DisplayNumberTriangle(){
    for(int i = 1; i <=9; i++){

        std::string number = std::to_string(i);

        for(int j = 1; j <=i; j++){
            std::cout << number;
        }

        std::cout << '\n';

    }
}
