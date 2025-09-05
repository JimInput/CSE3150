#include <string>

#include "parser.h"

namespace StringUtils {
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName) {
        size_t space_id = fullName.find(' ');
        if (space_id == std::string::npos)
            return;
        *firstName = fullName.substr(0, space_id);
        *lastName = fullName.substr(space_id+1);
    }

    std::string getUsername(const std::string& email) {
        size_t at_id = email.find('@');
        if (at_id == std::string::npos)
            return "";
        std::string username = email.substr(0, at_id);

        return username;
    }
}
