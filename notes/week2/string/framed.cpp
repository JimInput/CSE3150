#include <iostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;

void printGreeting(string name) {
	string msg = "Hello " + name + "!";
	int len = msg.size();
	string stars(len+4, '*');
	string edge = "*" + string(len+2, ' ') + "*";
	string middle = "* " + msg + " *";
	cout << stars << endl
		 << edge << endl
		 << middle << endl
		 << edge << endl
		 << stars << endl;
}

int main(void) {
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	printGreeting(name);
	return 0;
}

