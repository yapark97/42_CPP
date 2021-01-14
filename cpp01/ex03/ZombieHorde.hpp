#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <random>

class ZombieHorde {
public:
    ZombieHorde();
    ZombieHorde(int N);
    virtual ~ZombieHorde();
    void announce();

private:
    int N;
    Zombie *zombies;
    static std::string namepool[10];
};

#endif