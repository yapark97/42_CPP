#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    std::cout<<name<<", "<<title<<", is born!"<<std::endl;
}

Sorcerer::Sorcerer(Sorcerer &sc) {
    *this = sc;
}

Sorcerer& Sorcerer::operator=(const Sorcerer &sc) {
    name = sc.getName();
    title = sc.getTitle();
    return *this;
}

Sorcerer::~Sorcerer()
{
    std::cout<<name<<", "<<title<<", is dead. Consequences will never be the same!"<<std::endl;
}

std::string Sorcerer::getName() const
{
	return (name);
}

std::string Sorcerer::getTitle() const
{
	return (title);
}

void Sorcerer::polymorph(Victim const &vt)
{
    vt.getPolymorphed();
}


std::ostream& operator<<(std::ostream &os, const Sorcerer &sc)
{
    return os<<"I am "<<sc.getName()<<", "<<sc.getTitle()<<", and I like ponies!\n";
}