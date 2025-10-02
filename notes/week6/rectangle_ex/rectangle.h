#pragma once

#include <memory>
#include <ostream>
#include "point.h"

class Rectangle {
    Point corner_;
    double w_;
    double h_;
public:
    Rectangle() : w_(0), h_(0) {}
    Rectangle(double x, double y, double w, double h) : corner_(x, y), w_(w), h_(h) {}
    Point getCorner() const {return corner_;}
    double getWidth() const {return w_;}
    double getHeight() const {return h_;}

    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rect) {
        return os << "rect(" << rect.corner_ << "," << rect.w_ << "," << rect.h_ << ")";
    }
};
