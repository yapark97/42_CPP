#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <random>

class ClapTrap {
protected:
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
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &ft);
    ClapTrap& operator=(const ClapTrap &ft);
    virtual ~ClapTrap();
    unsigned int rangedAttack(std::string const &target);
    unsigned int meleeAttack(std::string const &target);
    unsigned int takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName() const;
};

#endif