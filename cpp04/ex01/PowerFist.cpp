#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(PowerFist &pf) : AWeapon(pf)
{}

PowerFist& PowerFist::operator=(const PowerFist &pf)
{
    name = pf.getName();
    damage = pf.getDamage();
    apcost = pf.getAPCost();
    return *this;
}

PowerFist::~PowerFist() {}

void PowerFist::attack() const
{
    std::cout<<"* pschhh... SBAM! *"<<std::endl;
}