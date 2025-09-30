#include <iostream>

template <typename T>
T max(T a, T b) {
    return a > b ? a : b;
}

using namespace std;

int main(void) {
    cout << max<int>(2,5) << endl;
    cout << max<double>(5.0, 7.1) << endl;

    return 0;
}
