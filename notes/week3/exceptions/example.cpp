#include <iostream>
#include <string>

long long factorial(long long n) {
    if (n == 0)
        return 1;

    long long rc = factorial(n-1);
    if (rc < 0)
        throw std::string("Overflow Error");

    return rc * n;
}

int main() {
    long long a, b;
    std::cin >> a;
    std::cin >> b;

    for (long long i = a; i < b; i++) {
        try {
            long long  x = factorial(i);
            std::cout << "result=" << x << std::endl;
        } catch(std::string s) {
            std::cout << "Something went wrong: " << s << std::endl;
            return 1;
        }
    }

    return 0;
}

