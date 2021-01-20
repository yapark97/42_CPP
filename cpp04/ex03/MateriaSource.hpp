#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *am[4];
public:
    MateriaSource();
    MateriaSource(MateriaSource const &ms);
    MateriaSource& operator=(MateriaSource const &ms);
    virtual ~MateriaSource();
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
    AMateria *getAM(int idx) const;
};

#endif