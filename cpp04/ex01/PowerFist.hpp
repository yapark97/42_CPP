#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
    PowerFist();
    PowerFist(PowerFist &pf);
    PowerFist& operator=(const PowerFist &pf);
    virtual ~PowerFist();
    void attack() const; //pure virtual Function.(Only declaration. No definition)
};

#endif