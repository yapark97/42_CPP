#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(PlasmaRifle &pr) : AWeapon(pr)
{}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &pr)
{
    name = pr.getName();
    damage = pr.getDamage();
    apcost = pr.getAPCost();
    return *this;
}

PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() const
{
    std::cout<<"* piouuu piouuu piouuu *"<<std::endl;
}