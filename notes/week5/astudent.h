#pragma once

class AStudent {
public:
    virtual void read(std::istream& is) = 0;
    virtual void print(std::ostream& os) = 0;
    virtual void set_name(const std::string& n) = 0;
};

// inheriting abstract class
class Student : public AStudent {
    std::string name_;
    double mt_, final_;
    std::vector<double> homeworks_;
public:
    Student();
    Student(const std::string& s);
    Student(const std::string& s, double mt, double final);
    Student(const Student& other);
    Student(Student&& other);
    // etc ...........
};


