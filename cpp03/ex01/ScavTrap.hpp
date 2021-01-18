#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <random>

class ScavTrap {
private:
    std::string name;
    unsigned int hitPoint;
    unsigned int maxHitPoint;
    unsigned int energyPoint;
    unsigned int maxEnergyPoint;
    unsigned int level;
    unsigned int meleeAttackDamage;
    unsigned int rangedAttackDamage;
    unsigned int ArmorDamageReduction;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &ft);
    ScavTrap& operator=(const ScavTrap &ft);
    virtual ~ScavTrap();
    unsigned int rangedAttack(std::string const &target);
    unsigned int meleeAttack(std::string const &target);
    unsigned int takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer() const;
    std::string getName() const;
};

#endif