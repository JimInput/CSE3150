#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

template <class InputIterator, class OutputIterator>
OutputIterator my_copy(InputIterator from, InputIterator to, OutputIterator into) {
    while (from != to) {
        *into++ = *from++;
    }
    return into;

    // into iterator here is an "adapter"
}

template <class Container>
void print_container(Container& con) {
    for (auto& i : con) {
        cout << i << " ";
    }
    cout << endl;
}

int main(void) {
    vector<int> a = {0,1,2,3,4};
    vector<int> b = {5,6,7,8};
    print_container(a);
    print_container(b);

    my_copy(a.begin(), a.end(), back_inserter(b));

    print_container(b);
    return 0;
}
