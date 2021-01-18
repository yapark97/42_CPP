#include "NinjaTrap.hpp"
#define MAX_DAM 1000

NinjaTrap::NinjaTrap() : ClapTrap()
{
    name = "anonymous";
    hitPoint = 60;
    maxHitPoint = 60;
    energyPoint = 120;
    maxEnergyPoint = 120;
    level = 1;
    meleeAttackDamage = 60;
    rangedAttackDamage = 5;
    ArmorDamageReduction = 0;
    std::cout << "NINJA-TP <" << name << "> was born." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hitPoint = 60;
    maxHitPoint = 60;
    energyPoint = 120;
    maxEnergyPoint = 120;
    level = 1;
    meleeAttackDamage = 60;
    rangedAttackDamage = 5;
    ArmorDamageReduction = 0;
    std::cout << "NINJA-TP <" << name << "> was born." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &nt)
{
    *this = nt;
    std::cout << "NINJA-TP <" << name << "> was born." << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &nt)
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

NinjaTrap::~NinjaTrap()
{
    std::cout << "NINJA-TP <" << name << "> is going to die soon..." << std::endl;
}

unsigned int NinjaTrap::ninjaShoebox(NinjaTrap &nt)
{
    std::cout << "NINJA-TP <" << name << "> Ninja Assassin!" << std::endl;
    std::cout << "NINJA-TP <" << nt.getName() << "> gets critical damage!" << std::endl;
    return MAX_DAM;
}

unsigned int NinjaTrap::ninjaShoebox(FragTrap &ft)
{
    std::cout << "NINJA-TP <" << name << "> Ninja Assassin!" << std::endl;
    std::cout << "FR4G-TP <" << ft.getName() << "> gets critical damage!" << std::endl;
    return MAX_DAM;
}

unsigned int NinjaTrap::ninjaShoebox(ScavTrap &st)
{
    std::cout << "NINJA-TP <" << name << "> Ninja Assassin!" << std::endl;
    std::cout << "SC4V-TP <" << st.getName() << "> gets critical damage!" << std::endl;
    return MAX_DAM;
}