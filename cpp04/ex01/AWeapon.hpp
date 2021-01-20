#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
public:
    AWeapon() = delete;
    AWeapon(std::string const &name, int apcost, int damage);
    AWeapon(AWeapon &aw);
    AWeapon& operator=(const AWeapon &aw);
    virtual ~AWeapon();
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0; //pure virtual Function.(Only declaration. No definition)
protected:
    std::string name;
    int apcost;
    int damage;
};

#endif