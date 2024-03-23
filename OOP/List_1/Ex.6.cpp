#include <cmath>


struct Point3D{

    double x;
    double y;
    double z;

};


double distancebetweenpoints(Point3D p1, Point3D p2){

    double d = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2));
    return d;

}