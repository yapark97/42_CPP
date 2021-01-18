#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
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
    std::cout << "<" << name << "> was born." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
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
    std::cout << "SC4V-TP <" << name << "> is dead." << std::endl;
}

unsigned int ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "SC4V-TP <" << name << "> attacks <" << target << "> at range, causing <" << rangedAttackDamage << "> points of damage!" << std::endl;
    return rangedAttackDamage;
}

unsigned int ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "SC4V-TP <" << name << "> attacks <" << target << "> at melee, causing <" << meleeAttackDamage << "> points of damage!" << std::endl;
    return meleeAttackDamage;
}

unsigned int ScavTrap::takeDamage(unsigned int amount)
{
    //if dead, return 0
    int ret = 1;
    amount = amount > ArmorDamageReduction ? amount - ArmorDamageReduction : 0;
    if (amount > hitPoint)
    {
        amount = hitPoint;
        ret = 0;
    }
    hitPoint -= amount;
    std::cout << "SC4V-TP <" << name << "> get attacked, taking <" << amount << "> points of damage!" << std::endl;
    return ret;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    amount = hitPoint + amount <= maxHitPoint ? amount : maxHitPoint - hitPoint;
    hitPoint += amount;
    if (amount == 0)
        std::cout << "SC4V-TP <" << name << "> is already full!" << std::endl;
    else
        std::cout << "SC4V-TP <" << name << "> get repaired, gaining <" << amount << "> Hit points!" << std::endl;
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

std::string ScavTrap::getName() const {
    return name;
}