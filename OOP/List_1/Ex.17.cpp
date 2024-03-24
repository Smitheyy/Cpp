#include <cmath>


double factorial(double n){
    if(n == 0 || n == 1)
        return 1;

    else if(n < 0)
        exit(-1);

    else{
        return (n * factorial(n - 1));
    }
}

double sumofs1(double x){       // McLaurin's sine implementation

    double sum = x;
    double fraction;
    int sign = +1;
    double power = 1;


    do{

        sign *= -1;
        power += 2;
        fraction = (pow(x, power)) / (factorial(power) * sign);
        sum += fraction;

    }while(fabs(fraction) >= 0.001);


    return sum;

}

double sumofs2(double x){   //McLaurin's cosine implementation

    double sum = 1;
    double fraction;
    int sign = +1;
    double power = 0;


    do{

        sign *= -1;
        power += 2;
        fraction = (pow(x, power)) / (factorial(power) * sign);
        sum += fraction;

    }while(fabs(fraction) >= 0.001);


    return sum;

}