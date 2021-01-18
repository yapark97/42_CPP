#include "SuperTrap.hpp"

int main()
{
    SuperTrap *yapark = new SuperTrap("yapark");
    std::cout << std::endl;

    FragTrap *jinbkim = new FragTrap("jinbkim");
    std::cout << std::endl;

    unsigned int damage = jinbkim->rangedAttack("yapark");
    if (!yapark->takeDamage(damage))
    {
        delete (yapark);
        yapark = 0;
    }
    std::cout << std::endl;

    damage = yapark->rangedAttack("jinbkim");
    if (!jinbkim->takeDamage(damage))
    {
        delete (jinbkim);
        jinbkim = 0;
    }
    std::cout << std::endl;

    damage = jinbkim->meleeAttack("yapark");
    yapark->takeDamage(damage);
    std::cout << std::endl;

    damage = yapark->meleeAttack("jinbkim");
    jinbkim->takeDamage(damage);
    std::cout << std::endl;

    damage = yapark->ninjaShoebox(*jinbkim);
    std::cout << std::endl;

    if (!jinbkim->takeDamage(damage))
    {
        delete (jinbkim);
        jinbkim = NULL;
        std::cout << std::endl;
    }

    if (yapark)
        delete yapark;
    std::cout << std::endl;

    if (jinbkim)
        delete jinbkim;
}