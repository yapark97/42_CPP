#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
    this->hp = hp;
    this->type = type;
}

Enemy::Enemy(Enemy &e)
{
    *this = e;
}

Enemy& Enemy::operator=(const Enemy &e)
{
    hp = e.getHP();
    type = e.getType();
    return *this;
}

Enemy::~Enemy() {}

std::string Enemy::getType() const
{
    return type;
}

int Enemy::getHP() const
{
    return hp;
}

void Enemy::takeDamage(int damage)
{
    if (damage < 0) return ;
    hp = damage > hp ? 0 : hp - damage;
}