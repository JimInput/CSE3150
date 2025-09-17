#include <iostream>
#include <vector>

using std::cout, std::endl, std::vector;

template<class T>
void printVector(vector<T>& vec) {
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main(void) {
    vector<int> vec;
    for (int i = 0; i < 5; ++i) {
        vec.push_back(i);
    }
    // for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    // for (vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++)
    printVector(vec);
    vector<int>::iterator on3 = vec.begin() + 2;
    cout << "rank3=" << *on3 << endl;
    *on3 = 17;
    cout << "rank3=" << *on3 << endl;
    printVector(vec);
    return 0;
}
