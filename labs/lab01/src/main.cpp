#include <iostream>
#include <string>

#include "parser.h"

int main(void) {
    std::cout << "Enter your full name: ";
    std::string fullName;
    std::getline(std::cin, fullName);

    std::cout << "Enter your email address: ";
    std::string email;
    std::cin >> email;

    std::string* firstName = new std::string;
    std::string* lastName = new std::string;

    StringUtils::parseName(fullName, firstName, lastName);
    std::string username = StringUtils::getUsername(email);

    std::cout << "First Name: " << *firstName << std::endl
              << "Last Name: " << *lastName << std::endl
              << "Username: " << username << std::endl;

    delete firstName;
    delete lastName;
}

