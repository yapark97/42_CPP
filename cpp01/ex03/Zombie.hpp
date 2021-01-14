#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie;

class Zombie {
public:
    Zombie();
    Zombie(std::string name, std::string type);
    void announce();
    void setName(std::string name);
private:
    std::string name;
    std::string type;
};

#endif