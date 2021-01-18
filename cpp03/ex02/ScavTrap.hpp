#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &ft);
    ScavTrap& operator=(const ScavTrap &ft);
    virtual ~ScavTrap();
    void challengeNewcomer() const;
};

#endif