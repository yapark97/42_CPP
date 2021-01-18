#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
    name = "anonymous";
    hitPoint = 100;
    maxHitPoint = 100;
    energyPoint = 120;
    maxEnergyPoint = 120;
    level = 1;
    meleeAttackDamage = 60;
    rangedAttackDamage = 20;
    ArmorDamageReduction = 5;
    std::cout << "SUPER-TP <" << name << "> got super power!" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
    this->name = name;
    hitPoint = 100;
    maxHitPoint = 100;
    energyPoint = 120;
    maxEnergyPoint = 120;
    level = 1;
    meleeAttackDamage = 60;
    rangedAttackDamage = 20;
    ArmorDamageReduction = 5;
    std::cout << "SUPER-TP <" << name << "> got super power!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &nt)
{
    *this = nt;
    std::cout << "SUPER-TP <" << name << "> got super power!" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &nt)
{
    name = nt.name;
    hitPoint = nt.hitPoint;
    maxHitPoint = nt.maxHitPoint;
    energyPoint = nt.energyPoint;
    maxEnergyPoint = nt.maxEnergyPoint;
    level = nt.level;
    meleeAttackDamage = nt.meleeAttackDamage;
    rangedAttackDamage = nt.rangedAttackDamage;
    ArmorDamageReduction = nt.ArmorDamageReduction;
    return *this;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SUPER-TP <" << name << "> lost super power..." << std::endl;
}

unsigned int    SuperTrap::rangedAttack(std::string const &target)
{
    return (FragTrap::rangedAttack(target));
}

unsigned int    SuperTrap::meleeAttack(std::string const &target)
{
    return (NinjaTrap::meleeAttack(target));
}