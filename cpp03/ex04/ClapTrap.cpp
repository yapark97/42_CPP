#include "ClapTrap.hpp"

void ClapTrap::test()
{
    std::cout<<"test\n";
}

ClapTrap::ClapTrap()
{
    name = "anonymous";
    std::cout << "CL4P-TP <" << name << "> is about to be born..." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    std::cout << "CL4P-TP <" << name << "> is about to be born..." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ft)
{
    *this = ft;
    std::cout << "CL4P-TP <" << name << "> is about to be born..." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ft)
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

ClapTrap::~ClapTrap()
{
    std::cout << "CL4P-TP <" << name << "> is dead." << std::endl;
}

unsigned int ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "CL4P-TP <" << name << "> attacks <" << target << "> at range, causing <" << rangedAttackDamage << "> points of damage!" << std::endl;
    return rangedAttackDamage;
}

unsigned int ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "CL4P-TP <" << name << "> attacks <" << target << "> at melee, causing <" << meleeAttackDamage << "> points of damage!" << std::endl;
    return meleeAttackDamage;
}

unsigned int ClapTrap::takeDamage(unsigned int amount)
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
    std::cout << "CL4P-TP <" << name << "> get attacked, taking <" << amount << "> points of damage!" << std::endl;
    return ret;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    amount = hitPoint + amount <= maxHitPoint ? amount : maxHitPoint - hitPoint;
    hitPoint += amount;
    if (amount == 0)
        std::cout << "CL4P-TP <" << name << "> is already full!" << std::endl;
    else
        std::cout << "CL4P-TP <" << name << "> get repaired, gaining <" << amount << "> Hit points!" << std::endl;
}

std::string ClapTrap::getName() const {
    return name;
}

unsigned int ClapTrap::getInfo(int idx) const {
    unsigned int info[8] = { hitPoint, maxHitPoint, 
        energyPoint, maxEnergyPoint, level, meleeAttackDamage, 
        rangedAttackDamage, ArmorDamageReduction };
    return info[idx];
}