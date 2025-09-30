#include <iostream>
#include <vector>
#include <string>

using std::cout, std::endl, std::vector, std::string;

template <class T>
T sum(vector<T>& vec) {
    T ttl{}; // initialize the default value for this class
    for (const T &x : vec) {
        ttl += x; // this function will work for any type with the + operator defined.
    }
    return ttl;
}

int main() {
    vector<string> vec;
    vec.push_back(string("hello"));
    vec.push_back(string("World"));
    vec[10] = "hehe"; // compiler ignores this since vectors have segfault protection
    for (string x : vec) {
        cout << x << " ";
    }
    vec.push_back("fuck");
    cout << endl;
    cout << sum(vec) << endl;
    return 0;
}
