#pragma once

#include <iostream>

using std::cout, std::endl;

class Vehicle {
public:
    Vehicle() {}
    void print() {
        cout << "I (" << this << ") am a vehicle!" << endl;
    }
};

class Car : public Vehicle { // you must include public for subsumption
public:
    Car() {}
    void print() {
        cout << "I (" << this << ") am a car!" << endl;
    }
};
