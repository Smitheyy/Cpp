#include "Fraction.h"
#include<iostream>
using namespace std;


Fraction::Fraction() {
	n = 2;
	d = 3;
}

Fraction::Fraction(int nominator, int denominator) {
    if (nominator == denominator) {
        nominator = 1;
        denominator = 2;
        cout << "Your fraction does not replicate a real number!";
    }

    else {
        n = nominator;
        d = denominator;
    }
}


void Fraction::Displayfraction() { cout << n << '/' << d; }
void Fraction::Findinversefraction() { cout << d << '/' << n; }


void Fraction::Modifynominator(int modification){
    if (modification == 0)
            cout << "Error! Your modification is pointless...";
        else {
            n = modification;
        }
    }

void Fraction::Modifydenominator(int modification) {
    if (modification == 0)
        cout << "Error! Your modification is pointless...";
    else {
        d = modification;
    }
}
