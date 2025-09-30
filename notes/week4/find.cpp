#include <iostream>
#include <vector>
#include <list>

using namespace std;

template<class CondIterator, class Predicate>
CondIterator my_find(CondIterator start, CondIterator end, Predicate p) {
    while (start != end) {
        if (p(*start)) {
            return start;
        }
        ++start;
    }
    return start;
}

int main() {
    std::list<int> x = {1, 20, 5, 12, 34, 17};
    auto at = my_find(x.begin(), x.end(), [](int v) -> bool {return v == 17;});
    bool found = (at != x.end());
    cout << "found? " << found << endl;
    if (found)
        cout << "value=" << *at << endl;

    return 0;
}
