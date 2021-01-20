#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
protected:
    unsigned int _xp;
    std::string type;

public:
    AMateria() = delete;
    AMateria(std::string const &type);
    AMateria(AMateria const &am);
    AMateria& operator=(AMateria const &am);
    virtual ~AMateria();
    std::string const &getType() const; //Returns the materia type
    unsigned int getXP() const;         //Returns the Materia's XP
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif