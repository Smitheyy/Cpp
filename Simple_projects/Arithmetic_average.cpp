#include <iostream>

void End_program(char* terminate) {
    std::cout << "Do you want to terminate the program?(enter q on your keyboard to execute): ";
    std::cin >> *terminate;
}


int main() {

    int sum = 0;
    int amount = 0;
    int i, j, k;   //these variables only control for loops
    char terminate = 'k';


    std::cout << "WELCOME TO ARITHMETIC AVERAGE!\n\n";
    std::cout << "Note section:\n";
    std::cout << "In this program you will be able to create your own table of numbers and count the sum of all of its contents and also their average: \n";
   

    while (terminate != 'q' && terminate != 'Q') {  //the actual program

        while ((std::cout << "Enter the amount of numbers in order to create your table of numbers on which you will be working on(Enter a number to submit your answer): ")
            && !(std::cin >> amount)) {

            std::cout << "In order to submit your answer you have to enter a natural number!\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }


        if (amount == 0) {
            std::cout << "So you have chosen to do nothing huh?\n";
            std::cout << "The sum of no elements of your non existing table is equal to 0" << '\n';
            std::cout << "Your average is equal to 0" << '\n';
            End_program(&terminate);
        }

        if (amount < 0) {
            std::cout << "You have to enter positive numbers only!\n";
            End_program(&terminate);
        }
        
        int* tab = new int(amount);   //this line dynamically creates an array of integers based on the given amount by the user


        for (i = 0; i < amount; i++) {    //this loop allows the user to fill an array with numbers
            while ((std::cout << "Enter the " << (i + 1) << " value: ") && !(std::cin >> tab[i])) {
                std::cout << "In order to submit your answer you have to enter a natural number!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }


        std::cout << "Here is your array: " << '\n';
        for (k = 0; k < amount; k++) {   //this loop displays an array onto the screen
            std::cout << tab[k] << '\n';
        }


        for (j = 0; j < amount; j++) {    //this loop calculates the sum of all the numbers in the array
            sum += tab[j];
        }

        std::cout << "Calculations:\n";
        std::cout << "The sum of all the numbers of your list is equal to " << sum << '\n';
        std::cout << "The average of sum is equal to " << static_cast<float>(sum) / amount << '\n';  //this line calculates the average
  
        sum = 0;
        End_program(&terminate);
    }

    return 0;
}
