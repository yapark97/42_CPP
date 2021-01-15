#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout<<"Default constructor called\n";
    val = 0;
    (void)frac;
}

Fixed::Fixed(const int val) {
    std::cout<<"Int constructor called\n";
    this->val = val<<frac;
}

Fixed::Fixed(const float val) {
    std::cout<<"Float constructor called\n";
    this->val = ((int)val<<frac) + roundf((val - (int)val) * (1<<frac));
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

std::ostream& operator<<(std::ostream &ost, const Fixed& fixed) {
    return ost<<fixed.toFloat();
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

int Fixed::toInt() const {
    return val>>frac;
}

float Fixed::toFloat() const {
    return (float)val / (1<<frac);
}