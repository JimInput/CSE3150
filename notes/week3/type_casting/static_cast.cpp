#include <iostream>

using std::cout, std::endl;

int main() {
    int x = 10;
    char c = 'a';
    int* p = static_cast<int*>(&c); // cant cast 1 byte into 4 bytes.
    cout << *p << endl;


    return 0;
}
