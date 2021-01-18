#include "FragTrap.hpp"

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

int main()
{
    FragTrap *yapark = new FragTrap("yapark");
    FragTrap *jinbkim = new FragTrap("jinbkim");
    std::cout<<std::endl;

    attack(0, yapark, jinbkim);
    attack(0, yapark, jinbkim);
    attack(0, yapark, jinbkim);
    attack(0, yapark, jinbkim);
    attack(0, yapark, jinbkim);
    attack(0, yapark, jinbkim);
    attack(0, yapark, jinbkim);
    std::cout<<std::endl;

    attack(0, yapark, jinbkim); //cause Error
    std::cout<<std::endl;

    FragTrap *jakang = new FragTrap("jakang");
    std::cout<<std::endl;

    attack(2, yapark, jakang);
    attack(2, yapark, jakang);
    attack(2, yapark, jakang);
    attack(2, yapark, jakang);
    attack(2, yapark, jakang); //no energy
}