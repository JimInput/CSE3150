#include <iostream>
#include <vector>
#include <stack>

using std::cout, std::endl, std::vector, std::stack;

template <class Container>
void rprint(Container& con) {
    for (auto it = con.rbegin(); it != con.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}


int main(void) {
    vector<int> vec;
    for (int i = 0; i < 10; ++i) {
        vec.push_back(i);
    }
    rprint(vec);
    return 0;
}
