#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
    SuperMutant();
    SuperMutant(SuperMutant &sm);
    SuperMutant& operator=(const SuperMutant &sm);
    virtual ~SuperMutant();
    void takeDamage(int damage);
};

#endif