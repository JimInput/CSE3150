#include <iostream>
#include "math_extras.h"
#include "check_utils.h"

int main(void) {
	int a = 5;
	int b = 6;

	if (CheckUtils::is_odd(a)) std::cout << a << " is odd." << std::endl;
	if (CheckUtils::is_even(a)) std::cout << a << " is even." << std::endl;
	if (CheckUtils::is_odd(b)) std::cout << b << " is odd." << std::endl;
	if (CheckUtils::is_even(b)) std::cout << b << " is even." << std::endl;

	std::cout << "factorial(" << a << ") = " << MathExtras::factorial(a) << std::endl;

	return 0;
}
