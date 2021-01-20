#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        am[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &ms)
{
    *this = ms;
}

MateriaSource & MateriaSource::operator=(MateriaSource const &ms)
{
    for (int i = 0; i < 4; i++)
        if (am[i]) { delete am[i]; am[i] = nullptr; }
    for (int i = 0; i < 4; i++)
        am[i] = ms.getAM(i);
    return *this;
}

MateriaSource::~MateriaSource() 
{
    for (int i = 0; i < 4; i++)
        if (am[i]) { delete am[i]; am[i] = nullptr; }
}

void MateriaSource::learnMateria(AMateria *src)
{
    //copy and store for cloning
    for (int i = 0; i < 4; i++)
        if (!am[i]) {
            am[i] = src;
            break ;
        }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    int i;
    for (i = 0; i < 4; i++)
        if (am[i] && am[i]->getType() == type) break;
    if (i == 4) return 0;
    return am[i]->clone();
}

AMateria* MateriaSource::getAM(int idx) const
{
    return am[idx];
}