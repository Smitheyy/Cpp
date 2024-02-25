#include <iostream>


void Stop_program(char* program_end) {  //this function terminates the program

    std::cout << "Do you want to terminate the program? (press q to terminate): ";
    std::cin >> *program_end;

}


void Swap(int* predecessor, int* successor) { //subfunction to bubble sort which swaps two values
    int buff = *predecessor;
    *predecessor = *successor;
    *successor = buff;
}


void Bubble_sort(int tab[], int sort_order, int size) {    //the bubble sort algorithm

    int j, l;

    for (j = 0; j < size - 1; j++){
        for (l = 0; l < size - 1; l++) {
            if (sort_order == 1) {

                if (tab[l] < tab[l + 1]) 
                    Swap(&tab[l], &tab[l + 1]);
            }

            if (sort_order == 2) {
                if (tab[l] > tab[l + 1])
                    Swap(&tab[l], &tab[l + 1]);
            }
        }
    }
 
}


void Display_tab(int tab[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        std::cout << tab[i] << '\n';
    }
 
}




int main()
{
    char program_end = 'k'; //it allows a user to choose between continiuing and exiting the program
    int size;
    int k;   //these variables control the loops
    int sort_order;


    std::cout << "WELCOME TO BUBBLE SORT PROGRAM!\n\n";
    std::cout << "This program will prompt you to create a table of integers of your choosing and then it will sort these numbers in a way you choose by using bubble sort algorithm\n";
    std::cout << "\n\nLet's start with creating a table!";  //introduction


    while(program_end != 'q' && program_end != 'Q') {   //the actual program
        std::cout << "\nEnter the amount of elements of your array: ";
        std::cin >> size;


        int* tab = new int[size];  //creation of our table of integers
        std::cout << "Your table has been created! Now let's fill it with integers!\n";


        for (k = 0; k < size; k++) {   //this loop allows the user to fill an array with integers of his choice
            std::cout << "Enter the " << k + 1 << " element of your table: ";
            std::cin >> tab[k];
        }
        std::cout << "Great! Here is your table of integers!:\n";
        Display_tab(tab, size);


        std::cout << "Now let's sort our newly created table! Here are the possible orders in which you can sort your array:\n";
        std::cout << "1.descending order\n";
        std::cout << "2.ascending order\n";
        std::cout << "Enter your choice of order here(1-for descending order and 2-for ascending order): ";
        std::cin >> sort_order; //here the user choooses the order of values in his array


        Bubble_sort(tab, sort_order, size);

        if (sort_order == 1) {
            std::cout << "Here is your table sorted in descending order:\n";
            Display_tab(tab, size);
        }

        if (sort_order == 2) {
            std::cout << "Here is your table sorted in ascending order:\n";
            Display_tab(tab, size);
        }
            

        delete[] tab;
        Stop_program(&program_end);
    }


    std::cout << "\nThank you for using my program, please have a nice day! :)\n";
    return 0;
}