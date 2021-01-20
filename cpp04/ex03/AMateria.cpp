#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    _xp = 0;
    this->type = type;
}

AMateria::AMateria(AMateria const &am)
{
    *this = am;
}

AMateria& AMateria::operator=(AMateria const &am)
{
    type = am.getType();
    _xp = am.getXP();
    return *this;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
    return type;
}

unsigned int AMateria::getXP() const
{
    return _xp;
}

void AMateria::use(ICharacter &target)
{
    (void) target;
    _xp += 10;
}