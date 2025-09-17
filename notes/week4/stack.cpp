#include <iostream>
#include <stack>

using std::cout, std::endl, std::stack;

int main() {
    stack<double> si; // remember LIFO (last-in, first-out)
    // Note we can make stacks of any type <generic>
    // stack<Monkey> si;
    // stack<string> si;
    for(int i = 0; i < 5; i++) {
        si.push(i);
    }

    while(!si.empty()) {
        cout << "Stackval=" << si.top() << endl;
        si.pop();
    }
    return 0;
}
