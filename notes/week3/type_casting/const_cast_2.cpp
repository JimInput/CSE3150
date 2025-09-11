#include <iostream>

using std::cout, std::endl;

int main() {
    int x = 42;
    int* p = &x;
    const int* cp = const_cast<const int*>(p);
    cout << "x=" << *cp << endl;
    // *cp = 10; cant assign to const type
    *p = 10;
    cout << "x=" << *cp << endl;
}
