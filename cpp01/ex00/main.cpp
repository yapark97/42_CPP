#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony *pony = new Pony();
    pony->ponysLife();
    delete pony;
}

void ponyOnTheStack()
{
    Pony pony;
    pony.ponysLife();
}

int main()
{
    std::cout<<"# Pony on the heap #"<<std::endl;
    ponyOnTheHeap();
    std::cout<<std::endl;
    std::cout<<"# Pony on the stack #"<<std::endl;
    ponyOnTheStack();
    return 0;
}