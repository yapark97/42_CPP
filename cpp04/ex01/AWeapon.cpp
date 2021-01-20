#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
    this->name = name;
    this->apcost = apcost;
    this->damage = damage;
}

AWeapon::AWeapon(AWeapon &aw)
{
    *this = aw;
}

AWeapon& AWeapon::operator=(const AWeapon &aw)
{
    name = aw.getName();
    damage = aw.getDamage();
    apcost = aw.getAPCost();
    return *this;
}

AWeapon::~AWeapon() {}

std::string AWeapon::getName() const
{
    return name;
}

int AWeapon::getAPCost() const
{
    return apcost;
}

int AWeapon::getDamage() const
{
    return damage;
}