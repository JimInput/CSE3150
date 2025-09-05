#include <iostream>
#include <string>

#include "greeting_utils.h"

int main(void) {
    std::string name;
    std::cerr << "Please enter your name: "; // print to cerr so that user sees it but doesn't confuse pytest.
    std::getline(std::cin, name);

    const std::string greeting = GreetingUtils::create_message(name);

    const char* c_greeting = GreetingUtils::format_as_c_string(greeting);

    std::cout << c_greeting << std::endl;

    delete[] c_greeting;
}

