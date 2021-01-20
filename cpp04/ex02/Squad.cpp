#include "Squad.hpp"

Squad::Squad()
{
    count = 0;
    unit = nullptr; 
    //NULL은 0으로 정의되어 있으므로 매개변수로 int, ptr 갖는 함수 오버로딩시 문제 발생
}

Squad::Squad(Squad &s)
{
    unit = nullptr;
    *this = s;
}

Squad& Squad::operator=(const Squad &s)
{
    destroyUnits();
    count = s.getCount();
    t_unit *cur, *prev;
    for (int i = 0; i < count; i++)
    {
        cur = new t_unit;
        cur->index = i;
        cur->ism = s.getUnit(i);
        prev->next = cur;
        prev = cur;
        if (!unit) unit = cur;
    }
    cur->next = nullptr;
    return *this;
}

Squad::~Squad()
{
    destroyUnits();
}

int Squad::getCount() const
{
    return count;
}

ISpaceMarine *Squad::getUnit(int index) const
{
    t_unit *cur = unit;
    while (cur)
    {
        if (cur->index == index)
            return cur->ism;
        cur = cur->next;
    }
    return nullptr;
}

int Squad::push(ISpaceMarine *ism)
{
    if (!ism)
        return count;
    t_unit *newUnit = new t_unit;
    newUnit->ism = ism;
    newUnit->index = count++;
    newUnit->next = nullptr;

    if (unit == nullptr)
    {
        unit = newUnit;
        return count;
    }
    t_unit *cur = unit;
    while (cur->next)
        cur = cur->next;
    cur->next = newUnit;
    return count;
}

void Squad::destroyUnits()
{
    t_unit *cur = unit, *prev;
    while (cur != nullptr) {
        prev = cur;
        cur = cur->next;
        delete prev->ism;
        delete prev;
    }
    unit = nullptr;
    count = 0;
}