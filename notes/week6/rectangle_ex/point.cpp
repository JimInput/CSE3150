#include "point.h"
#include <ostream>

Point operator+(const Point& p1, const Point& p2) {
    return Point(p1.getX() + p2.getX(), p1.getY() + p2.getY());
}

Point operator*(const Point& p, const double s) {
    return Point(p.getX() * s, p.getY() *s);
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.getX() << ", " << p.getY() << ")";
    return os;
}
