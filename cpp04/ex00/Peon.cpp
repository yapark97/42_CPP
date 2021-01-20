#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    std::cout<<"Zog zog."<<std::endl;
}

Peon::Peon(Peon &p) : Victim(p)
{
    std::cout<<"Zog zog."<<std::endl;
}

Peon& Peon::operator=(const Peon &vt) {
    name = vt.getName();
    return *this;
}

Peon::~Peon()
{
    std::cout<<"Bleuark..."<<std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout<<name<<" has been turned into a pink pony!"<<std::endl;
}


std::ostream& operator<<(std::ostream &os, const Peon &vt)
{
    return os<<"I'm "<<vt.getName()<<" and I like otters!\n";
}