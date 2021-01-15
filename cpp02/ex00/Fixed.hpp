#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
public:
    Fixed();
    Fixed(const Fixed& fixed);
    Fixed& operator=(const Fixed& fixed);
    virtual ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
private:
    int val;
    static const int frac = 8;
};

#endif