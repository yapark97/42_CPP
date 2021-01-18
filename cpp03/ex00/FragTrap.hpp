#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <random>

class FragTrap {
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
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &ft);
    FragTrap& operator=(const FragTrap &ft);
    virtual ~FragTrap();
    unsigned int rangedAttack(std::string const &target);
    unsigned int meleeAttack(std::string const &target);
    unsigned int takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    unsigned int vaulthunter_dot_exe(std::string const &target);
    std::string getName() const;
};

#endif