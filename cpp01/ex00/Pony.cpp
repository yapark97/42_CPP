#include "Pony.hpp"

Pony::Pony()
{
    std::cout<<"A pony was born..."<<std::endl;
}

Pony::~Pony()
{
    std::cout<<"The pony has died..."<<std::endl;
}

void Pony::ponysLife()
{
    std::cout<<"The pony eats carrots."<<std::endl;
    std::cout<<"The pony runs."<<std::endl;
    std::cout<<"The pony got married."<<std::endl;
    std::cout<<"The pony had a baby pony."<<std::endl;
}