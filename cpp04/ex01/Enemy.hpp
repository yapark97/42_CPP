#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
public:
    Enemy() = delete;
    Enemy(int hp, std::string const &type);
    Enemy(Enemy &e);
    Enemy& operator=(const Enemy &e);
    virtual ~Enemy();
    std::string getType() const;
    int getHP() const;
    virtual void takeDamage(int damage);
protected:
    int hp;
    std::string type;
};

#endif