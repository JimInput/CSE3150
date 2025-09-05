#include <string>

#include "greeting_utils.h"

namespace GreetingUtils {
    std::string create_message(const std::string& name) {
        return "Hello, " + name + "!";
    }

    char* format_as_c_string(const std::string& msg) {
        const int size = msg.size();
        char* c_string = new char[size+1];
        for (int i = 0; i < size; ++i) {
            c_string[i] = msg[i];
        }
        c_string[size] = '\0';
        return c_string;
    }
}
