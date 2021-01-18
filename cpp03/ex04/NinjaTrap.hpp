#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(const NinjaTrap &nt);
    NinjaTrap& operator=(const NinjaTrap &nt);
    virtual ~NinjaTrap();
    unsigned int ninjaShoebox(NinjaTrap &nt);
    unsigned int ninjaShoebox(FragTrap &ft);
    unsigned int ninjaShoebox(ScavTrap &st);
};

#endif