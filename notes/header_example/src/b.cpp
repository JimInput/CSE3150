#include <iostream>
#include "a.h"
#include "b.h"

void funcB() {
	std::cout << "Hello from B" << std::endl;
	funcA();
}
