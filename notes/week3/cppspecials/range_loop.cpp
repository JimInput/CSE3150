#include <iostream>
#include <string>

using std::cout, std::endl;

int main() {
    std::string vals = "hellow";
    for (char c : vals) {
        cout << "c=" << c << endl;
    }

    return 0;
}
