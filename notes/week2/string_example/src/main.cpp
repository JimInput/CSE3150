#include <iostream>
#include <string>

#include "formatting.h"

using std::string, std::getline, std::cin, std::cout, std::endl;

int main(void) {
    cout << "Please enter full name: ";
    string full_name;
    getline(cin, full_name);

    cout << "The length of your full name is: " << full_name.size() << endl;

    cout << formatted_name(full_name) << endl;

    cout << "Hello, " + full_name + "!" << endl;
    return 0;
}

