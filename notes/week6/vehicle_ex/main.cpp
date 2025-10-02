#include "vehicles.h"

void foo(Vehicle& v) { 
    // w/out polymorphism this will treat the car as a vehicle even though we can subsume (because of public in inheritance definition
    v.print();
}

int main(void) {
    Vehicle v;
    Car c;
    v.print();
    c.print();
    foo(v);
    foo(c);

    return 0;
}
