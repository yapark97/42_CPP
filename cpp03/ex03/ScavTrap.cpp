#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    name = "anonymous";
    hitPoint = 100;
    maxHitPoint = 100;
    energyPoint = 50;
    maxEnergyPoint = 50;
    level = 1;
    meleeAttackDamage = 20;
    rangedAttackDamage = 15;
    ArmorDamageReduction = 3;
    std::cout << "SC4V-TP <" << name << "> was born." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hitPoint = 100;
    maxHitPoint = 100;
    energyPoint = 50;
    maxEnergyPoint = 50;
    level = 1;
    meleeAttackDamage = 20;
    rangedAttackDamage = 15;
    ArmorDamageReduction = 3;
    std::cout << "SC4V-TP <" << name << "> was born." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ft)
{
    *this = ft;
    std::cout << "SC4V-TP <" << name << "> was born." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ft)
{
    name = ft.name;
    hitPoint = ft.hitPoint;
    maxHitPoint = ft.maxHitPoint;
    energyPoint = ft.energyPoint;
    maxEnergyPoint = ft.maxEnergyPoint;
    level = ft.level;
    meleeAttackDamage = ft.meleeAttackDamage;
    rangedAttackDamage = ft.rangedAttackDamage;
    ArmorDamageReduction = ft.ArmorDamageReduction;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SC4V-TP <" << name << "> is going to die soon..." << std::endl;
}

void ScavTrap::challengeNewcomer() const {
    std::string challengePool[5] = {
        "Kill one player",
        "Kill three players", 
        "Drink three potions", 
        "Reinforce your armor", 
        "Level up"
        };
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 4);
    int index = dis(gen);
    std::cout << "SC4V-TP <" << name << "> Your newcomer challenge is <" <<challengePool[index]<<"> !" <<std::endl;
}