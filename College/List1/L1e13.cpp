struct ComplexNumber{
    double real;
    double im;
};

ComplexNumber MultiplyComplexNum(ComplexNumber z1, ComplexNumber z2){

     ComplexNumber result{};

     result.real = z1.real * z2.real - z1.im * z2.im;

     result.im = z1.real * z2.im + z1.im * z2.real;


    return result;

}


ComplexNumber DivideComplexNum(ComplexNumber z1, ComplexNumber z2){

    ComplexNumber result{};
    double denominator = z2.real * z2.real + z2.im * z2.im;

    result.real = (z1.real * z2.real + z1.im * z2.im) / denominator;

    result.im = (z1.im * z2.real - z1.real * z2.im) / denominator;


    return result;

}
