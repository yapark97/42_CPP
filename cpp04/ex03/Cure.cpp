#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(Cure const &am) : AMateria("cure")
{
    *this = am;
}

Cure& Cure::operator=(Cure const &am)
{
    this->_xp = am.getXP();
    return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
    Cure *ret = new Cure(*this);
    return ret;
}

void Cure::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout<<"* heals " << target.getName() << "'s wounds *"<< std::endl;
}