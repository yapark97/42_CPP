#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle();
    PlasmaRifle(PlasmaRifle &pr);
    PlasmaRifle& operator=(const PlasmaRifle &pr);
    virtual ~PlasmaRifle();
    void attack() const; //pure virtual Function.(Only declaration. No definition)
};

#endif