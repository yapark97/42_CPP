#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <cstdlib>

class ZombieEvent;

class ZombieEvent {
public:
    ZombieEvent();
    void setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    void randomChump(); //create Zombie with a random name & announce
private:
    std::string type;
    static std::string namepool[4];
};

#endif