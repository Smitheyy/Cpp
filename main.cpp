#include <iostream>
#include<cmath>
#include<cstring>
#include<vector>
#include "L1e1.cpp"
#include "L1e2.cpp"
#include "L1e3and4.cpp"
#include "L1e6.cpp"
#include "L1e7.cpp"
#include "L1e8.cpp"
#include "L1e9.cpp"
#include "L1e10.cpp"
#include "L1e11.cpp"
#include "L1e12.cpp"
#include "L1e13.cpp"
#include "L1e14.cpp"
#include "L1e15.cpp"
#include "L1e16.cpp"
#include "L1e17.cpp"
#include "L1e18.cpp"
#include "L1e19.cpp"


int main() {

    ComplexNumber z1{}, z2{}, product{}, quotient{}; //necessary for ex.13


    unsigned int decision = 0; //variable which states what kind of program to run


    unsigned int day1, day2, month1, month2, year1, year2; //necessary for ex.15


    double x_values[] = {0, M_PI /4, M_PI / 2, M_PI}; //necessary for ex.17


    float tab[] = {10, 20, 30 , 500, -2.1, 75.5, 2.5, 501.72};
    int size = sizeof(tab) / sizeof(tab[0]);        //these two lines are necessary for ex.10


    double array[][3] = {{9,11.11, -200},
        {2,0, 5.104}};

    int rows = sizeof(array) / sizeof(array[0]);                     // Necessary for ex.11 (this includes these 3 lines)
    int columns = sizeof(array[0]) / sizeof(array[0][0]);


    char c[] = {"Hello"};
    int size_c = strlen(c);      //these two lines are necessary for ex.12


    std::vector<std::vector<int>> matrix{{5, 2}, {7, 7}, {9, 8}, {10, 2}};
    std::vector<int> vector{10, 5};

    std::string ASCII_text = "This is some text. I would like to tell you that you are stronger than you think you are. You will make it. You are valuable. You are loved. You matter. Keep going.";
    std::vector<std::string> sentences = DivideToSentences(ASCII_text);     //this is used for ex.19


    std::cout << "Capacity of matrix: " << matrix.capacity() << '\n';
    std::cout << "Choose a program that you would like to run:\n";
    std::cout << "1.Hello world x 1\n";
    std::cout << "2.Hello world x 13\n";
    std::cout << "3.Zwiekszacz\n";
    std::cout << "4.Zwiekszacz v 2.0\n";
    std::cout << "5.Distance between points\n";
    std::cout << "6.Comparison of a, b and c integers\n";
    std::cout << "7.Display alphabet characters and their ASCII representation\n";
    std::cout << "8.Display a triangle made of numbers\n";
    std::cout << "9.Return max and min float value of an array\n";
    std::cout << "10.Return max and min double value of 2D array/\n";
    std::cout << "11.Reverse elements in an array of chars\n";
    std::cout << "12.Multiply and divide two complex numbers\n";
    std::cout << "13.Determine triangle type and whether the triangle can be built\n";
    std::cout << "14.Determine which date occurred earlier\n";
    std::cout << "15.Create a draft of ints and calculate the sum and the mean of its elements\n";
    std::cout << "16.Calculate the sum of two series\n";
    std::cout << "17.Place vector into matrix\n";
    std::cout << "18.Count sentences in ASCII text\n";
    std::cout << "Enter your choice here: "; // all the options the user has


    std::cin >> decision;
    std::cout << '\n';


    switch(decision){

        case 1:
            HelloWorld();

            break;

        case 2:
            HelloWorldForLoop();

            break;

        case 3:
            int number;

            std::cout << "Enter an integer value: ";
            std::cin >> number;

            number = Zwiekszacz(number);

            std::cout << "\nYour number got incremented! This is the result: " << number << '\n';

            break;

        case 4:
            for(int i = 0; i < 17; i++){
                std::cout << "Argument: " << i << "\tZwiekszacz" << '(' << i << "):" << Zwiekszacz(i) << '\n';
            }

            break;

        case 5:
            std::cout << "The distance between two points is equal to : " << DistanceBetweenPoints(6, 7, 2, 1, 8, 7);

            break;

        case 6:
            CompareIntegersABC(7, 7, 6);

            break;

        case 7:
            DisplayAlphabetAndAscii();

            break;

        case 8:
            DisplayNumberTriangle();

            break;

        case 9:
            std::cout << "The maximal value of your float table is equal to: " << MaxFloatValue(tab, size) << '\n';
            std::cout << "The minimal value of your float table is equal to: " << MinFloatValue(tab, size) << '\n';

            break;

        case 10:
            std::cout << "The maximal value of your double 2D table is equal to: " << MaxDoubleValue2D(rows, columns, array) << '\n';
            std::cout << "The minimal value of your 2D table is equal to: " << MinDoubleValue2D(rows, columns, array) << '\n';

            break;

        case 11:
            ReversedArrayOfChars(c, size_c);

            std::cout << "Reversed string or table of characters: ";
            DisplayArrayofChars(c, size_c);

            break;

        case 12:
            z1.real = 7;
            z1.im = 10;
            z2.real = 2;
            z2.im = -5;

            product = MultiplyComplexNum(z1, z2);
            quotient = DivideComplexNum(z1, z2);

            std::cout << "Product of z1 and z2: " << product.real << " + " << product.im << "i\n";
            std::cout << "Quotient of z1 and z2: " << quotient.real << " + " << quotient.im << "i\n";
            break;

        case 13:
            DetermineTriangleType(3, 4, 5);

            break;

        case 14:
            std::cout << "Enter the first date as follows(day |space| month |space| year): ";
            std::cin >> day1 >> month1 >> year1;

            std::cout << "Enter the second date as follows(day |space| month |space| year): ";
            std::cin >> day2 >> month2 >> year2;

            if(IsDateErlier(day1, month1, year1, day2, month2, year2) == 1)
                std::cout << "First date is prior to the second!\n";

            else if(IsDateErlier(day1, month1, year1, day2, month2, year2) == 2)
                std::cout << "Second date is prior to the first!\n";

            else{
                std::cout << "The dates are equal to one another!\n";
            }

            break;

        case 15:
            NNumbers();

            break;

        case 16:
            for(double x : x_values){

                std::cout << "For x = " << x << '\n';
                std::cout << "S1 = " << CalculateS1(x) << '\n';
                std::cout << "S2 = " << CalculateS2(x) << "\n\n";

            }

            break;

        case 17:
            AddVectorIntoMatrix(matrix, vector);

            for(auto & i : matrix){
                for(int j : i){
                    std::cout << j << '\t';
                }
                std::cout << std::endl;
            }
            break;

        case 18:
            DisplayResults(sentences);
            break;

        default:
            std::cout << "You have to enter a positive natural number in order to submit your answer!\n";
            break;

    }

    return 0;

}
