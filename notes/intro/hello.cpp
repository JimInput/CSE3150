#include <iostream>

using std::cout;
using std::endl;

namespace CSE3150 {
	int foo(int n) {
		return n+1;
	}
}

int main(void) {
	cout << "Hello, World!" << CSE3150::foo(10) << endl;
	return 0;
}

