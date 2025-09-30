#include "complex.h"
#include <iostream>

using std::cout, std::endl;

int main(void) {
    Complex c1(1, 2);
    Complex c2(3, -5);
    Complex c3 = c1 + c2;

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c3: " << c3 << endl;


    return 0;
}
