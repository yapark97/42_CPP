#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
    RadScorpion();
    RadScorpion(RadScorpion &rs);
    RadScorpion& operator=(const RadScorpion &rs);
    virtual ~RadScorpion();
    void takeDamage(int damage);
};

#endif