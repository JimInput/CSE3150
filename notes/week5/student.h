#pragma once
#include <string>
#include <vector>
#include <istream>
#include <ostream>

class Student { // class (by default everything is private), struct (by default everything is public)
    std::string name_;
    double mt_, final_;
    std::vector<double> homeworks_;
public:
    // --- CONSTRUCTORS --- //
    // default constructor
    Student() {mt_ = final_ = 0};
    // custom constructors
    Student(const std::string& s) {
        name = s; 
        mt_ = final_ = 0;
    };
    Student(const std::string& s) : name_(s), mt_(0), final_(0) {};
    // copy constructor
    Student(const Student& s2) {
        name_ = s2.name_;
        mt_ = s2.mt_;
        final_ = s2.final_;
        for (double d : s2.homeworks_) {
            homeworks_.push_back(d);
        }
    };
    // custom copy constructor
    Student(const Student& s2) {
        name_ = s2.name_;
        mt_ = s2.mt_;
        final_ = s2.final_;
        homeworks_(s2.homeworks_);
    };
    // --- CONSTRUCTORS --- //
   
    // transfer constructor
    Student& operator=(const Student& s) {
        if (this == &s) {return *this); // guarding against x = x case.
        name_ = s.name_;
        mt_ = s.mt_;
        final_ = s.final_;
        homeworks_(s.homeworks_);
        return *this; // we want to return a reference (this is a pointer)
    }

    // move contructor
    Student& operator=(Student&& s) {
        name = std::move(s.name_);
        mt_ = s.mt_;
        final_ = s.final_;
        homeworks_ = std::move(s.homeworks_);
        return *this;
    }

    // destructor
    ~Student() {
        std::cout << "Destroy!" << this << std::endl;
    }

    void read(std::istream& is);
    void print(std::ostream& os);
};
