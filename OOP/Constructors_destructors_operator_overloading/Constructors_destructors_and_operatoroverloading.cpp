#include <iostream>
#include "ComplexNumber.h"
#include "String.h"
using namespace std;


int main()
{
    ComplexNumber cn1(5, -21, 'C'), cn2(10, 8, 'T'), result(0, 0, 'P'), cn(0, 0, 'A');
    ComplexNumber p = cn;   // ComplexNumber objects

    String s1("abc"), s2("defgh"), s3("abc"), s4; // String objects

    int decision = 0;   // a variable used for controlling the switch
    
   
    cout << "Here are all the assignments from this list:" << endl; // user choice between class showcase
    cout << "1.ComplexNumber class and its functionality" << endl;
    cout << "2.String class and its functionality" << endl;
    cout << "Enter your decision here(a natural number from 1 - 2 the third one is an extension oif the second one):";
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

        result = 15 + cn1;  // addition of ComplexNum and an integer
        result.DisplayCNum();
        cout << endl;

        result = cn1 + 17;  // same as above but with different order of variables
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
        cin >> cn;  // >> operator overloading
        cn.DisplayCNum();
        break;


    case 2:
        s1.DisplayS();  //Display call
        cout << endl;
        s2.DisplayS();
        cout << endl;

        cout << s1.GetSize() << endl;   // GetSize call
        s1.Concatenate(s2); // Concatenate call
        s1.DisplayS();
        cout << endl;

        s2.ReverseS();  // ReverseS call
        s2.DisplayS();
        cout << endl;

        s1 * 3;    // displays our string given number of times
        cout << endl;
        3 * s1;
        cout << endl;

        if ((s1 == s3) == 0)
            cout << "Strings are the same string!";

        else {
            cout << "These strings are differ from each other...";
        }
        cout << endl;

        s1 = s3;    // overloading = operator
        s1.DisplayS();
        cout << endl;

        cout << s2; // overloading << operator
        cout << endl;

        cin >> s4;  // overloading >> operator
        cout << s4;
        break;


    default:
        cout << "In order for your choice to be taken into account you have to enter a natural number from 1 - 3!";     // prevents from some senseless input
        break;
    }

    return 0;
}