#include <cmath>


double DistanceBetweenPoints(double x1, double x2, double y1, double y2, double z1, double z2){
    double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));

    return d;
}
