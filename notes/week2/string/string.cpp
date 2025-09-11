#include<iostream>
#include <string>

using std::cout, std::cin, std::string,  std::endl;

int main() {
	cout << "Enter name: ";
	string name;
	cin >> name;
	cout << "Hello, " + name + "!" << endl;
	return 0;
}

