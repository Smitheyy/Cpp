#include<iostream>
#include "Ex_1.cpp"
#include "Ex_5.cpp"
#include "Ex_6.cpp"


int main() {

    unsigned int decision = 0;
    int number = 5;
    char tab[3] = {'a', 'b', 'c'};
    double d_number = 10.5;
    void (*ptr_void)(int) = &func1;
    double (*ptr_double)(int, double) = &func2;
    int (*ptr_char_table)(char[3]) = &func3;
    const char* n = "Kupsztalixon";
    char target[4] = {'S', 't', 'h', 'x'};
    char source[] = "One hundred thousand!";
    char func_call;
    char n1[] = "Kupa";
    char n2[] = "Kupa";
    char reversed[] = "Ala ma kota";


    std::cout << "Here are the assignments that you can choose to run(enter a corresponding number): " << std::endl;
    std::cout << "1.Void function\n";
    std::cout << "2.Function1 call by void pointer\n";
    std::cout << "22.Function11 call by void pointer\n";
    std::cout << "3.Function2 call by double pointer\n";
    std::cout << "33.Function22 call by double pointer\n";
    std::cout << "4.Function3 call by int pointer\n";
    std::cout << "44.Function33 call by int pointer\n";
    std::cout << "5.Some random functions from ANSI-C\n";
    std::cout << "Enter your choice here: ";
    std::cin >> decision;


    switch(decision){


        case 1:
            increaseintegerbytwobypointer(&number);
            std::cout << "Pointer increase: " << number << std::endl;
            increaseintegerbytwobyreference(number);
            std::cout << "Reference increase: " << number << std::endl;

            break;


        case 2:

            std::cout << "Enter a number: ";
            std::cin >> number;
            (*ptr_void)(number);

            break;


        case 22:

            ptr_void = &func11;
            std::cout << "Enter a number: ";
            std::cin >> number;
            (*ptr_void)(number);

            break;


        case 3:
            std::cout << "Enter a number: ";
            std::cin >> number;
            std::cout << "Enter a floating point number: ";
            std::cin >> d_number;

            std::cout << (*ptr_double)(number, d_number);

            break;


        case 33:

            ptr_double = &func22;
            std::cout << "Enter a number: ";
            std::cin >> number;
            std::cout << "Enter a floating point number: ";
            std::cin >> d_number;

            std::cout << (*ptr_double)(number, d_number);

            break;


        case 4:

            std::cout << (*ptr_char_table)(tab);

            break;


        case 44:

            ptr_char_table = &func33;
            std::cout << (*ptr_char_table)(tab);

            break;


        case 5:

            std::cout << "Which function would you like to call?(choose by entering characters from a to e)\n";
            std::cout << "a)nstrlen(n) - which takes a character's adress\n";
            std::cout << "b)nstrcpy(target, source, size_of_target) - it copies a source string into target string\n";
            std::cout << "c)nstrcmp(n1, n2) - it compares two strings and returns 0 when they are equal and 1 in every other scenario\n";
            std::cout << "d)nstrchr(n, z) - it searches through the string and checks whether z is inside of it, if it is than it returns a pointer to the first instance of it there and returns nullptr otherwise\n";
            std::cout << "e}nstrrev(n) - it reverses a string\n";
            std::cout << "Enter your choice here: ";
            std::cin >> func_call;

            switch(func_call){

                case 'a':

                    std::cout << nstrlen(n);
                    break;


                case 'b':

                    nstrcpy(target, source);

                    std::cout << target << std::endl;
                    std::cout << source;

                    break;

                case 'c':

                    std::cout << nstrcmp(n1, n2);

                    break;


                case 'd':
                    std::cout << nstrchr(n1, 'l');
                    break;


                case 'e':
                    nstrrev(reversed);
                    for(int i = 0; i < sizeof(reversed); i++)
                        std::cout << reversed[i];

                    break;


                default:
                    std::cout << "You have to enter a letter from a to e in order to submit your choice!";
                    break;
            }
            break;


        default:
            std::cout << "You have to enter number between 1 - 6\n";
            break;

    }

    return 0;
}
