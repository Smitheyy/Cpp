#include <iostream>


void nrealnumbers(){

    double number = 0;
    double sum = 0;
    unsigned int k = 0;
    double mean;


    std::cout << "Enter n real numbers excluding 0(n means the number of these numbers): ";
    do{
        std::cin >> number;

        if(number !=0 ){

            sum += number;
            k++;

        }
    }while(number != 0);


    mean = sum / k;

    std::cout << "Sum of given values: " << sum << std::endl;
    std::cout << "Mean of given values: " << mean;

}