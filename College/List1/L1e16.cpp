#include<iostream>


void NNumbers(){

    int numbers = 1;
    int sum = 0;
    float mean = 0;
    int amount_of_integers = 0;


    std::cout << "Enter n numbers(enter 0 to terminate0): ";
    do{

        std::cin >> numbers;
        if(numbers != 0){

            sum += numbers;
            amount_of_integers++;

        }

    }while(numbers != 0);

    mean = float(sum) / float(amount_of_integers);

    std::cout << "The sum of your numbers is equal to: " << sum << '\n';
    std::cout << "The mean of your draft of integers is equal to " << mean << '\n';

}
