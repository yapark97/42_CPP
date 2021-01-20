#include "Character.hpp"

Character::Character(std::string name)
{
    this->name = name;
    this->ap = 40;
    this->aWeapon = NULL;
}

Character::Character(Character &c)
{
    *this = c;
}

Character &Character::operator=(const Character &c)
{
    name = c.getName();
    ap = c.getAP();
    aWeapon = c.getAWeapon();
    return *this;
}

Character::~Character() {}

void Character::recoverAP()
{
    ap = ap > 30 ? 40 : ap + 10;
}

void Character::equip(AWeapon *aw)
{
    aWeapon = aw;
}

void Character::attack(Enemy *e) //???
{
    if (!aWeapon) return ;
    if (aWeapon->getAPCost() > ap) return ;
    ap -= aWeapon->getAPCost();
    aWeapon->attack();
    e->takeDamage(aWeapon->getDamage());
    if (e->getHP() <= 0) {delete (e);}
}

std::string Character::getName() const
{
    return name;
}

int Character::getAP() const
{
    return ap;
}
AWeapon* Character::getAWeapon() const
{
    return aWeapon;
}

std::ostream& operator<<(std::ostream& os, Character &c)
{
    if (!c.getAWeapon())
        return os<<c.getName()<<" has "<<c.getAP()<<" AP and is unarmed\n";
    return os<<c.getName()<<" has "<<c.getAP()<<" AP and wields a "<<c.getAWeapon()->getName()<<"\n";
}