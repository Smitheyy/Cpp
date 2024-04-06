#include<iostream>


void func1(int a){
    std::cout << "Function 1, value given: " << a;
}

void func11(int a){
    std::cout << "Function 11, value given " << a;
}

double func2(int a, double b){
    double sum = (double)a + b;
    return sum;
}

double func22(int a, double b){
    double multiplication = (double)a * b;
    return multiplication;
}

int func3(char tab[3]);
int func3(char* tab) {
    int number_of_iterations = 0;

    for(int i = 0; i < sizeof(tab); i++){
        std::cout << tab[i];
        number_of_iterations++;
    }

    return number_of_iterations;
}

int func33(char tab[3]);
int func33(char* tab){
    int number_of_iterations = 0;

    for(int i = 3; i >= 0; i--){
        std::cout << tab[i];
        number_of_iterations++;
    }

    return number_of_iterations;
}
