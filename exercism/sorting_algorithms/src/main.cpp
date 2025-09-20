#include <iostream>
#include <vector>
#include "sorting_algs.cpp"

using std::cout, std::endl, std::vector;
template<class Container>
void printContainer(Container& con) {
    for (auto it = con.begin(); it != con.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";
}

int main(void) {
    const int N = 20;
    vector<int> vec;
    for (auto i = 0; i < N; ++i) {
        vec.push_back(N-i);
    }
    printContainer(vec);
    cout << "Selection Sort:" << endl;
    selection_sort(vec);
    printContainer(vec);
}
