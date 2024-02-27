#include<iostream>


void Swap(int *x, int *y) {

    std::cout << "number1 = number1 + number2;\n";
    std::cout << "number2 = number1 - number2\n";
    std::cout << "number1 = number1 - number2\n\n\n";

    std::cout << "In the first line adds both of the numbers together and stores the result as the first number\n\n";
    *x += *y;   

    std::cout << "The result:\n";
    std::cout << "number1 = " << *x << " and number2 = " << *y << '\n';

    std::cout << "The second line subtracts your previous result from number2 and stores the result in number2(that's the first swap)\n\n";
    *y = *x - *y;

    std::cout << "The result:\n";
    std::cout << "number 1 = " << *x << " and number2 = " << *y << '\n';

    std::cout << "The third line subtracts number1 from number2 and stores the result in number1(that's the second swap)\n\n";
    *x -= *y;

    std::cout << "FINAL RESULT! Here are your numbers after the swap:\n";
    std::cout << "number1 = " << *x << " and number2 = " << *y << '\n\n';

}


void End_program(char* termination) {

    std::cout << "Do you want to terminate the program?(press t if you want to terminate or p if you want to proceed): ";
    std::cin >> *termination;

    if (*termination == 't' && *termination == 'T')
        std::cout << "\nGoodbye then! Thank you for your time :)\n";
        
}



int main()
{
    int number_1;
    int number_2;
    char termination = 'k';

    std::cout << "WELCOME TO CHANGE_VALUES PROGRAM!\n\n\n";
    std::cout << "INFO:\n";
    std::cout << "In this program you will swap values of two integers of your choosing, by also explaining the whole entire process";


    while (termination != 'p' && termination != 'T') {
        std::cout << "Enter a value of the first number: ";
        std::cin >> number_1;


        std::cout << "\nEnter a value of the second number: ";
        std::cin >> number_2;


        std::cout << "\nHere are your numbers before the swap:\n";
        std::cout << "number1 = " << number_1 << " and number2 = " << number_2 << '\n';


        std::cout << "\nSWAP!\n";
        Swap(&number_1, &number_2);


        End_program(&termination);
    }
    
    return 0;
}
