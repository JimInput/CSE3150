#include <iostream>
#include <string>
using std::cout, std::endl, std::string;

int sumOf(const string& a) { // do not pass by value since it is costly to copy big strings
    int ttl = 0;
    for (int i = 0; i < a.size(); ++i)
        ttl += a[i];
    // a[0] = 100; once a is const we are good this gives a compilation error
    return ttl;
}

int main() {
    string x = {'H', 'e', 'l', 'l', 'o'};
    int s = sumOf(x);
    cout << "s=" << s << endl;
    cout << "x=" << x << endl;

    return 0;
}
