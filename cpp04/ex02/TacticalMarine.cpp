#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout<<"Tactical Marine ready for battle!"<<std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &tm)
{
    *this = tm;
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const &tm)
{
    (void)tm;
    return *this;
}

TacticalMarine::~TacticalMarine()
{
    std::cout<< "Aaargh..."<<std::endl;
}

ISpaceMarine *TacticalMarine::clone() const
{
    TacticalMarine *ret = new TacticalMarine(*this);
    return ret;
}

void TacticalMarine::battleCry() const
{
    std::cout<<"For the holy PLOT!"<<std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout<<"* attacks with a bolter *"<<std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout<< "* attacks with a chainsword *"<<std::endl;
}