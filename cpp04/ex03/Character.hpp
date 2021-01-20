#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
    std::string name;
    AMateria *am[4];
public:
    Character() = delete;
    Character(std::string const name);
    Character(Character const &c);
    Character &operator=(Character const &c);
    virtual ~Character();
    virtual std::string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);
    AMateria *getAM(int idx) const;
};

#endif