#include "FragTrap.hpp"
#include "ScavTrap.hpp"
/*
void attack(int type, FragTrap *&ft1, FragTrap *&ft2) {
    //포인터의 레퍼런스 : 이중포인터와 유사. 포인터가 가리키는 값을 변경할 수 있음.
    //0 : range 1 : melee 2 : random
    if (!ft1 || !ft2) {
        std::cout<<"Err: player is already dead!"<<std::endl;
        return ;
    }
    unsigned int damage = 0;
    if (type == 0)
        damage = ft1->rangedAttack(ft2->getName());
    else if (type == 1)
        damage = ft1->meleeAttack(ft2->getName());
    else if (type == 2)
        damage = ft1->vaulthunter_dot_exe(ft2->getName());
    if (!damage)
        return;
    if (!ft2->takeDamage(damage)) {
        delete ft2;
        ft2 = NULL;
    }
}

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
}*/

int main()
{
    FragTrap *yapark = new FragTrap("yapark");
    ScavTrap *jinbkim = new ScavTrap("jinbkim");
    std::cout<<std::endl;

    jinbkim->challengeNewcomer();
    std::cout<<std::endl;

    unsigned int damage = yapark->rangedAttack(jinbkim->getName());
    jinbkim->takeDamage(damage); //jinbkim : 100 > 83
    std::cout<<std::endl;

    damage = yapark->vaulthunter_dot_exe(jinbkim->getName());
    if (!jinbkim->takeDamage(damage)) {//jinbkim : 83 > ??
        delete jinbkim;
        jinbkim = NULL;
    }
    std::cout<<std::endl;
    
    if (yapark)
        delete yapark;
    if (jinbkim)
        delete jinbkim;
}