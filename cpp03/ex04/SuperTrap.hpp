#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"

//virtual 키워드를 사용하면 하위 개체의 복사본 하나만 포함
class SuperTrap : public FragTrap, public NinjaTrap
{
public:
    void test();
    SuperTrap();
    SuperTrap(std::string name);
    SuperTrap(const SuperTrap &nt);
    SuperTrap &operator=(const SuperTrap &nt);
    virtual ~SuperTrap();
    unsigned int rangedAttack(std::string const &target);
    unsigned int meleeAttack(std::string const &target);
};

#endif