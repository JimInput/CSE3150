#include <iostream>
#include <vector>
#include <stack>
#include <string>

using std::cout, std::endl, std::vector, std::stack, std::string;

int main(void) {
    string sentence = "C++ makes generic programming powerful";
    vector<string> word_vector;
    string word{};
    for (const auto c : s) {
        if (c != ' ') {
            word += c
        } else {
            word_vector.push_back(word);
            word = "";
        }
    }

}
