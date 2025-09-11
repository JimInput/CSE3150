#include <iostream>

using std::cout, std::endl;

int main(void) {
    int i = 42;
    double d = static_cast<double>(i); // gain precision
    bool b = static_cast<bool>(i); // nonzero -> true
    char c = static_cast<char>(i); // ascii (-127 to 128)
    int j = static_cast<int>(3.14); // truncation (loser precision)

    cout << "i=" << i << endl;
    cout << "d=" << d << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    cout << "j=" << j << endl;

}
