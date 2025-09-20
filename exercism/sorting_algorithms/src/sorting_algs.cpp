#include <iterator>
#include "sorting_algs.h"

using std::iter_swap;

template<class Container>
void bubble_sort(Container& con) {
    if (con.empty()) return;

    for (auto last = con.end(); last != con.begin(); last--) {
        for (auto j = con.begin(); std::next(j) != last; j++) {
            auto next = std::next(j);
            if (*j > *next) {
                iter_swap(j, next);
            }
        }
    }
}

template<class Container>
void selection_sort(Container& con) {
    if (con.empty()) return;

    for (auto it = con.begin(); std::next(it) != con.end(); it++) {
        auto min = it;
        for (auto jt = std::next(it); jt != con.end(); jt++) {
            if (*jt < *min) {
                min = jt;
            }
        }
        iter_swap(it, min);
    }
}

