#include <iostream>
#include "ComplexNumber.h"
using namespace std;


int main()
{
    ComplexNumber cn1(5, -21, 'C'), cn2(10, 8, 'T'), result(0, 0, 'P'), cn(0, 0, 'A');
    ComplexNumber p = cn;
    int decision = 0;
    cout << "Here are all the assignments from this list:";
    cout << "1.ComplexNumber class and its functionality" << endl;
    cout << "Enter your decision here(a natural number from 1 - 3):";
    cin >> decision;


    switch (decision) {

    case 1:
        p.DisplayCNum();    //copy contructor
        cout << endl;

        result = cn1.Add(cn2);  // "Add" function
        result.DisplayCNum();
        cout << endl;

        result = operator+(cn1, cn2);   // global addition
        result.DisplayCNum();
        cout << endl;

        result = cn1 + cn2; // local addition
        result.DisplayCNum();
        cout << endl;

        result = 15 + cn1;
        result.DisplayCNum();
        cout << endl;

        result = cn1 + 17;
        result.DisplayCNum();
        cout << endl;

        cout << result;     // << overload
        cout << endl;

        cout << cn++;   // post-incrementation
        cout << endl;
        cout << ++cn;   // pre-incrementation

        cout << endl;
        cn1.DisplayCNum();
        cout << endl;

        cout << "Enter your complex number's data as follows (name(single character), real part(an integer), imaginary part(an integer)): ";
        cin >> cn;
        cn.DisplayCNum();
        break;


    default:
        cout << "In order for your choice to be taken into account you have to enter a natural number from 1 - 3!";
        break;
    }

    

   
    return 0;

}