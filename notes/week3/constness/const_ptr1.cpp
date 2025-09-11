#include <iostream>

using std::cout, std::endl;

int main(void) {
    int x = 10;
    const int* px = &x;
    cout << "px=" << px << endl;
    cout << "*px=" << *px << endl;
    // *px = 20; this errors out because px thinks x is read only.
    x = 20; // allowed
    cout << "*px=" << *px << endl;
    return 0;
}
