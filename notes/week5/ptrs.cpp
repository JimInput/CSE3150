#include <memory>

#include "student.h"

int main(void) {
    // automatically deletes when out of scope
    auto up = std::make_unique<Student>();
    // auto up2 = up; doesnt work
    auto up2 = std::move(up); // this works
    
    // automatically delete when memory no longer referenced
    auto sp1 = std::make_shared<Student>();
    auto sp2 = sp1; // both share ownership
    // resource destroyed when all references are out of scope
    

    // non-owning observer of a shared_ptr (prevents cyclic references)
    struct B;
    struct A {
        std::shared_ptr<B> b_ptr;
    };
    struct B {
        std::weak_ptr<A> a_ptr;
    };

    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();
    a->b_ptr = b;
    b->a_ptr = a;

    return 0;
}
