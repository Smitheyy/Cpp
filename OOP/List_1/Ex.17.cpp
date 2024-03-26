#include <cmath>


double sumofs1(double x){       // McLaurin's sine implementation

    double sum = x;
    double denominator = 1;
    double fraction;
    int sign = 1;
    int power = 1;


    do{

        sign *= -1;
        power += 2;
        denominator *= (power - 1) * power;
        fraction = (pow(x, power)) / (denominator * sign);
        sum += fraction;

    }while(fabs(fraction) >= 0.001);


    return sum;

}

double sumofs2(double x){   //McLaurin's cosine implementation

    double sum = 1;
    double denominator = 1;
    double fraction;
    int sign = 1;
    int power = 2;


    do{

        sign *= -1;
        denominator *= (power - 1) * power;
        fraction = (pow(x, power)) / (denominator * sign);
        sum += fraction;
        power += 2;

    }while(fabs(fraction) >= 0.001);


    return sum;

}