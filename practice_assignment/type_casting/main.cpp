#include <iostream>
#include <string>

using std::string, std::cout, std::endl;

int sum_of_value(string s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i];
    }
    s = "modified";
    return sum;
}

int sum_of_reference(string &s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i];
    }
    s = "modified";
    return sum;
}

int sum_of_const_reference(const string &s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i];
    }
    // s = "modified"; compiler error
    return sum;
}

int main(void) {
    string msg = "Hello";
    int val = sum_of_value(msg);
    val = sum_of_reference(msg);
    // int val = sum_of_const_reference(msg);
    cout << val << endl;
    cout << msg << endl;
}
