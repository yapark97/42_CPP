#include "ZombieEvent.hpp"

int main(void)
{
    Zombie z1("Alice", "type1");
    z1.announce();

    ZombieEvent ze1;
    ze1.setZombieType("type2");
    Zombie *z2 = ze1.newZombie("Bob");
    z2->announce();
    delete z2;

    ze1.setZombieType("type3");
    ze1.randomChump();
}