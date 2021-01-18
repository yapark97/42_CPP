#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    name = "anonymous";
    hitPoint = 100;
    maxHitPoint = 100;
    energyPoint = 100;
    maxEnergyPoint = 100;
    level = 1;
    meleeAttackDamage = 30;
    rangedAttackDamage = 20;
    ArmorDamageReduction = 5;
    std::cout << "FR4G-TP <" << name << "> was born." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hitPoint = 100;
    maxHitPoint = 100;
    energyPoint = 100;
    maxEnergyPoint = 100;
    level = 1;
    meleeAttackDamage = 30;
    rangedAttackDamage = 20;
    ArmorDamageReduction = 5;
    std::cout << "FR4G-TP <" << name << "> was born." << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft)
{
    *this = ft;
    std::cout << "FR4G-TP <" << name << "> was born." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &ft)
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

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP <" << name << "> is going to die soon..." << std::endl;
}

unsigned int FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    //if out of energy, return 0
    std::string attackPool[5] = {"kicks", "punches", "pinches", "bothers", "makes fun of"};
    unsigned int damagePool[5] = {200, 20, 10, 5, 1};
    if (energyPoint < 25)
    {
        std::cout << "FR4G-TP <" << name << "> out of energy." << std::endl;
        return 0;
    }
    energyPoint -= 25;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 4);
    int index = dis(gen);
    std::cout << "FR4G-TP <" << name << "> " <<attackPool[index]<<" "<<target<<" causing "<<damagePool[index]<<" amount of damage!" <<std::endl;
    return damagePool[index];
}