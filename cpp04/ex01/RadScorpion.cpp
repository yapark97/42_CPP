#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout<<"* click click click *"<<std::endl;
}

RadScorpion::RadScorpion(RadScorpion &rs) : Enemy(rs)
{
    std::cout<<"* click click click *"<<std::endl;
}

RadScorpion& RadScorpion::operator=(const RadScorpion &rs)
{
    hp = rs.getHP();
    type = rs.getType();
    return *this;
}

RadScorpion::~RadScorpion() 
{
    std::cout<<"* SPROTCH *"<<std::endl;
}

void RadScorpion::takeDamage(int damage)
{
    Enemy::takeDamage(damage);
}