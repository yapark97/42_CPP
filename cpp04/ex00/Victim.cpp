#include "Victim.hpp"

Victim::Victim(std::string name)
{
    this->name = name;
    std::cout<<"Some random victim called "<<name<<" just appeared!"<<std::endl;
}

Victim::Victim(Victim &vt) {
    *this = vt;
}

Victim& Victim::operator=(const Victim &vt) {
    name = vt.getName();
    return *this;
}

Victim::~Victim()
{
    std::cout<<"Victim "<<name<<" just died for no apparent reason!"<<std::endl;
}

std::string Victim::getName() const
{
	return (name);
}

void Victim::getPolymorphed() const
{
    std::cout<<name<<" has been turned into a cute little sheep!"<<std::endl;
}


std::ostream& operator<<(std::ostream &os, const Victim &vt)
{
    return os<<"I'm "<<vt.getName()<<" and I like otters!\n";
}