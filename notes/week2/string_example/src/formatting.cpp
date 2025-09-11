#include <iostream>
#include <string>

#include "formatting.h"

using std::string;

string formatted_name(string full_name) {
    size_t last_id = full_name.find(' ');
    if (last_id == string::npos) {
        return "fail";
    }
    string rev_name = full_name.substr(last_id+1) + ", " + full_name.substr(0, last_id);
    return rev_name;
}

