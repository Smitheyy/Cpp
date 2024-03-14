#include<cmath>


double CalculateS1(double x){

    double sum_of_s1 = 0.0;
    double a = x;
    int i = 0;

    while(fabs(a) > 0.001) {

        sum_of_s1 += a;
        i += 2;
        a = -a * x * x / (i * (i + 1));

    }

    return sum_of_s1;

}


double CalculateS2(double x){

    double sum_of_s2 = 1;
    double a = 1;
    int i = 0;

    while(fabs(a) > 0.001){

        sum_of_s2 += a;
        i += 2;
        a = -a * x * x / (i * (i - 1));
    }

    return sum_of_s2;

}