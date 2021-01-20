#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(Ice const &am);
    Ice& operator=(Ice const &am);
    virtual ~Ice();
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif