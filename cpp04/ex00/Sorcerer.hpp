#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"

class Sorcerer {
public:
    Sorcerer() = delete;
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer &sc);
    Sorcerer& operator=(const Sorcerer &sc);
    virtual ~Sorcerer();
    std::string getName() const;
    std::string getTitle() const;
    void polymorph(Victim const &vt);
private:
    std::string name;
    std::string title;
};

std::ostream& operator<<(std::ostream &os, const Sorcerer &sc);

#endif