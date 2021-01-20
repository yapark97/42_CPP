#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

typedef struct  s_unit
{
    int index;
    ISpaceMarine *ism;
    struct s_unit *next;
}               t_unit;


class Squad : public ISquad
{
public:
    Squad();
    Squad(Squad &s);
    Squad& operator=(const Squad &s);
    virtual ~Squad();
    virtual int getCount() const;
    virtual ISpaceMarine *getUnit(int) const;
    virtual int push(ISpaceMarine *);
    void destroyUnits();
private:
    t_unit *unit;
    int count;
};

#endif