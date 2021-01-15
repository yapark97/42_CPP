#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout<<"Default constructor called\n";
    val = 0;
    (void)frac;
}

Fixed::Fixed(const Fixed& fixed) {
    std::cout<<"Copy constructor called\n";
    val = fixed.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& fixed) {
    std::cout<<"Assignation operator called\n";
    val = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout<<"Destructor called\n";
}

int Fixed::getRawBits(void) const {
    std::cout<<"getRawBits member function called\n";
    return val;
}

void Fixed::setRawBits(int const raw) {
    std::cout<<"setRawBits member function called\n";
    val = raw;
}