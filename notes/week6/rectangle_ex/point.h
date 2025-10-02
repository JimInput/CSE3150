#pragma once
#include <ostream>

class Point {
    double x_;
    double y_;
public:
    Point() : x_(0), y_(0) {}
    Point(double x, double y) : x_(x), y_(y) {}
    Point(const Point& p) : x_(p.getX()), y_(p.getY()) {}
    double getX() const {return x_;}
    double getY() const {return y_;}
    void set(double x, double y) {
        x_ = x;
        y_ = y;
    }
    Point& operator=(const Point& p) {
        x_ = p.getX();
        y_ = p.getY();
        return *this;
    }

    friend Point operator+(const Point& p1, const Point& p2);
    friend Point operator*(const Point& p1, const double s);
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
};
