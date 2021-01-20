#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
public:
    Character() = delete;
    Character(std::string name);
    Character(Character &c);
    Character& operator=(const Character &c);
    virtual ~Character();
    void recoverAP();
    void equip(AWeapon *aw);
    void attack(Enemy *e);
    std::string getName() const;
    int getAP() const;
    AWeapon *getAWeapon() const;
private:
    std::string name;
    int ap;
    AWeapon *aWeapon;
};

std::ostream& operator<<(std::ostream& os, Character &c);

#endif