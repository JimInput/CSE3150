#include <iostream>

using std::cout, std::endl;

int main() {
    const int x = 10;
    int* p = const_cast<int*>(&x); // STAY AWAY Severely undefined behavior.
    *p = 20;
    cout << "p=" << p << endl;
    cout << "x=" << x << endl;
    cout << "*p=" << *p << endl;
    cout << "&x=" << &x << endl;
}
