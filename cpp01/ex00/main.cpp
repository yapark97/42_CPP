#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony pony();
    pony.ponysLife();
}

void ponyOnTheStack()
{

}

int main()
{
    ponyOnTheHeap();
    ponyOnTheStack();
}