#include "Character.hpp"

Character::Character(std::string const name)
{
    for (int i = 0; i < 4; i++)
        am[i] = nullptr;
    this->name = name;
}

Character::Character(Character const &c)
{
    for (int i = 0; i < 4; i++)
        am[i] = nullptr;
    *this = c;
}

Character & Character::operator=(Character const &c)
{
    for (int i = 0; i < 4; i++)
        if (am[i]) { delete am[i]; am[i] = nullptr; }
    name = c.getName();
    for (int i = 0; i < 4; i++)
        am[i] = c.getAM(i);
    return *this;
}

Character::~Character() 
{
    for (int i = 0; i < 4; i++)
        if (am[i]) { delete am[i]; am[i] = nullptr; }
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
        if (!am[i]) { am[i] = m; break; }
}

void Character::unequip(int idx)
{
    am[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
    if (!am[idx]) return ;
    am[idx]->use(target);
}

AMateria* Character::getAM(int idx) const
{
    return am[idx];
}