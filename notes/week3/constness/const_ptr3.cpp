#include <iostream>

using std::cout, std::endl;

int main(void) {
    int x = 10;
    const int* const px = &x;
    cout << "px=" << px << endl;
    cout << "*px=" << *px << endl;
    // *px = 20; this errors out
    x = 20;
    cout << "*px=" << *px << endl;
    // px += 1 this errors out
    return 0;
}
