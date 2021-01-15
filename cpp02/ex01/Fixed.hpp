#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
public:
    Fixed();
    Fixed(const int val);
    Fixed(const float val);
    Fixed(const Fixed& fixed);
    Fixed& operator=(const Fixed& fixed);
    virtual ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    int toInt() const;
    float toFloat() const;
private:
    int val;
    static const int frac = 8;
};

std::ostream& operator<<(std::ostream& ost, const Fixed& fixed);

#endif