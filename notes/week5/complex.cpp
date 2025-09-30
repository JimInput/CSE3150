#include "complex.h"

void Complex::print(std::ostream& os) const {
    os << "(" << real_ << " + " << imag_ << "i)";
}
