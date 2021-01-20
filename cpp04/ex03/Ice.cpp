#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice const &am) : AMateria("ice")
{
    *this = am;
}

Ice& Ice::operator=(Ice const &am)
{
    this->_xp = am.getXP();
    return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
    Ice *ret = new Ice(*this);
    return ret;
}

void Ice::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout<<"* shoots an ice bolt at " << target.getName() << " *"<<std::endl;
}