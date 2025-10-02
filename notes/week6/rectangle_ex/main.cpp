#include <iostream>
#include "point.h"
#include "rectangle.h"

using std::cout, std::endl;

int main(void) {
    Rectangle r = Rectangle(10, 20, 100, 100);
    cout << "Before: " << r << endl;
    Point p1(42, 42);
    r.getCorner() = p1;
    cout << "After: " << r << endl;

    return 0;
}
