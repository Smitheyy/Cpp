#include <cmath>


struct ComplexNumber{

    double real;
    double imaginary;

};


ComplexNumber multiplytwocomplexnumbers(ComplexNumber z1, ComplexNumber z2){

    ComplexNumber result{};

    result.real = z1.real * z2.real - z1.imaginary * z2.imaginary;

    result.imaginary = z1.real * z2.imaginary + z1.imaginary * z2.real;


    return result;

}

ComplexNumber dividetwocomplexnumbers(ComplexNumber z1, ComplexNumber z2){

    ComplexNumber result{};

    double denominator = pow(z2.real, 2) + pow(z2.imaginary, 2);


    result.real = (z1.real * z2.real + z1.imaginary * z2.imaginary) / denominator;

    result.imaginary = (z1.imaginary * z2.real - z1.real * z2.imaginary) / denominator;


    return result;

}