#pragma once

#include <string>

namespace GreetingUtils {
    std::string create_message(const std::string& name);
    char* format_as_c_string(const std::string& msg);
}

