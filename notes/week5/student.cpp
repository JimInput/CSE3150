#include "student.h"
#include <memory>
#include <iostream>
#include <istream>
#include <ostream>

using std::cout, std::endl;

void Student::read(std::istream& is) {
    is >> name_ >> mt_ >> final_;
    int num_homeworks = 0;
    is >> num_homeworks;
    for (int i = 0; i < num_homeworks; ++i) {
        int v;
        is >> v;
        homeworks_.push_back(v);
    }
}

void Student::print(std::ostream& os) {
    os << "Name: " << name_ << "[" <<  mt_ << "," << final_ << "]" << endl;
    for (auto v : homeworks_) {
        os << "\t" << v << endl;
    }
}

int main() {
    Student s;
    // shared_ptr<Student> sp = make_shared<Student>();
    s.name_ = "John";
    s.mt_ = 60;
    s.final_ = 90;
    s.homeworks_.push_back(65);
    s.homeworks_.push_back(95);
    auto sp = std::make_unique<Student>();
    *sp = s; // copies student from stack to the heap
    cout << "s.name_=" << s.name_ << endl;
    cout << "sp.name_=" << sp->name_ << endl;
    cout << "&s.name_=" << &s.name_ << endl;
    cout << "&sp.name_=" << &sp->name_ << endl;
    s.name_ = "Bert";
    cout << "&s.name_=" << &s.name_ << endl;
    cout << "&sp.name_=" << &sp->name_ << endl;
    
    return 0;
}
