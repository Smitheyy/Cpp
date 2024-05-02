#include <iostream>
#include "String.h"
using namespace std;


int main()
{
    String s1("abc"), s2("defgh"), s3("abc"), s4;  // creating objects and constructor call

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
  
    return 0;
}


