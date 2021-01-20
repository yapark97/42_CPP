#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(Cure const &am);
    Cure& operator=(Cure const &am);
    virtual ~Cure();
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif