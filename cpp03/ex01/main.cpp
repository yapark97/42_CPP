#include "ScavTrap.hpp"

void attack(int type, ScavTrap *&st1, ScavTrap *&st2) {
    //포인터의 레퍼런스 : 이중포인터와 유사. 포인터가 가리키는 값을 변경할 수 있음.
    //0 : range 1 : melee 2 : random
    if (!st1 || !st2) {
        std::cout<<"Err: player is already dead!"<<std::endl;
        return ;
    }
    unsigned int damage = 0;
    if (type == 0)
        damage = st1->rangedAttack(st2->getName());
    else if (type == 1)
        damage = st1->meleeAttack(st2->getName());
    if (!damage)
        return;
    if (!st2->takeDamage(damage)) {
        delete st2;
        st2 = NULL;
    }
}

int main()
{
    ScavTrap *yapark = new ScavTrap("yapark");
    yapark->challengeNewcomer();
    std::cout<<std::endl;
    
    ScavTrap *kycho = new ScavTrap("kycho");
    kycho->challengeNewcomer();
    std::cout<<std::endl;
    
    attack(1, yapark, kycho);
    attack(1, yapark, kycho);
    attack(1, yapark, kycho);
    attack(1, yapark, kycho);
    attack(1, yapark, kycho);
    std::cout<<std::endl;

    kycho->beRepaired(10);
    std::cout<<std::endl;

    attack(1, yapark, kycho);
    attack(1, yapark, kycho);
    attack(1, yapark, kycho);
    std::cout<<std::endl;
    
    if (yapark)
        delete yapark;
    if (kycho)
        delete kycho;
}