#include "math_extras.h"

namespace MathExtras {
	int factorial(int n) {
		if (n <= 0) return 1;
		return n * factorial(n-1);
	}
}

