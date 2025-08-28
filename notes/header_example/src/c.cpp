#include <iostream>
#include "c.h"
#include "b.h"

void funcC() {
	std::cout << "Hello from C" << std::endl;
	funcB();
}
