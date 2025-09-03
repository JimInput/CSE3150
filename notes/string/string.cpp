#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
	cout << "Enter name: ";
	string name;
	cin >> name;
	cout << "Hello, " + name + "!" << endl;
	return 0;
}

