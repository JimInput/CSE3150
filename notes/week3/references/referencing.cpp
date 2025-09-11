#include <iostream>

using std::cout, std::endl;

int main(void) {
    int x = 10;
    const int &y = x; // we usually want this so that references to our variable can't modify it.
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    // y = 20; this causes a compiler error
    x = 20;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "&x=" << &x << endl;
    cout << "&y=" << &y << endl;
    return 0;
}
