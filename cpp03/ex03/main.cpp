#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    NinjaTrap *yapark = new NinjaTrap("yapark");
    FragTrap *jakang = new FragTrap("jakang");
    ScavTrap *jinbkim = new ScavTrap("jinbkim");
    std::cout<<std::endl;

    unsigned int damage = yapark->meleeAttack(jakang->getName());
    jakang->takeDamage(damage); //jakang : 100>45
    std::cout<<std::endl;

    damage = yapark->ninjaShoebox(*jinbkim);
    if (!jinbkim->takeDamage(damage)) {
        delete jinbkim;
        jinbkim = NULL;
    }
    std::cout<<std::endl;
    
    if (yapark)
        delete yapark;
    if (jinbkim)
        delete jinbkim;
    if (jakang)
        delete jakang;
}