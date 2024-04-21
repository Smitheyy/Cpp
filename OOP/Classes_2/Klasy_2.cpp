#include <iostream>
#include "Point.h"
#include "Vector.h"
#include "String.h"
#include "PhoneBook.h"
#include "PhoneNumber.h"
using namespace std;


int main()
{

    Vector v1, v2, result;
    String s1("Hello"), s2("People"), s3, s4;
    PhoneBook phonebook;
    int decision = 0;

    cout << "Here are all the homeworks concerning classes on second year of colleague:" << endl;
    cout << "1.Vectors and points" << endl;
    cout << "2.String" << endl;
    cout << "3.Phone book  and Phone Number" << endl;
    cout << "Enter your choice here:";
    cin >> decision;


    switch (decision) {
    case 1:
        cout << "Push!" << endl;
        v1.PushOntoVector(Point(7, 12, -200));
        v1.PushOntoVector(Point(3, 81, 10));


        v2.PushOntoVector(Point(8, 13, 20));
        v2.PushOntoVector(Point(3, 4, 5));


        result = v1 + v2;
        result.DisplayVector();
        result = v1 - v2;
        result.DisplayVector();
        result = v1.VectorProduct(v2);
        result.DisplayVector();
        result.ClearVector();


        cout << "Dot product = " << v1.DotProduct(v2);
        break;


    case 2:
        cout << "Length of s1: " << s1.LengthOfString() << endl;
        cout << "Length of s2: " << s2.LengthOfString() << endl;

        s3 = s1.FoldingString(s2);
        cout << "Combined strings:" << endl; 
        s3.DisplayString();
        s4 = s1.CutString(1, 3);
        cout << "Cutted string:" << endl;
        s4.DisplayString();
        break;


    case 3:
        phonebook.AddNumber(PhoneNumber("721659783", "Kowalski", "Maciej"));
        phonebook.AddNumber(PhoneNumber("333999687", "Nowak", "Pawe³"));
        phonebook.AddNumber(PhoneNumber("304721300", "Papagej", "Halitys"));

        phonebook.DeleteNumber("721659783");

        phonebook.SearchBySurname("Kowalski");

        cout << "The amount of numbers in the book: " << phonebook.DownloadCounter() << endl;
        break;


    default:
        cout << "In order to submit your choice you have to enter a digit from 1 - 3";
        break;
    }

    return 0;
}