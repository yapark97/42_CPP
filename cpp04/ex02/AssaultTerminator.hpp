#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
    AssaultTerminator();
    AssaultTerminator(AssaultTerminator const &at);
    AssaultTerminator& operator=(AssaultTerminator const &at);
    virtual ~AssaultTerminator();
    virtual ISpaceMarine *clone() const;
    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;
};

#endif