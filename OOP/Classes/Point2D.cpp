#include "Point2D.h"
#include<cstdlib>
using namespace std;


void Point2D::Initializexyrandomly() { x = rand(); y = rand(); }
Point2D::Point2D(int _x, int _y) { x = _x; y = _y; }
Point2D Point2D::Addpoints(Point2D p) { return Point2D(x + p.x, y + p.y); }
void Point2D::Reflectionfromgivenpoint(int center_x, int center_y) { cout << "Reflection(" << 2 * center_x - x << ',' << 2 * center_y - y << ')'; }