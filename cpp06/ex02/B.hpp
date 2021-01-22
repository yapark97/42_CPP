#ifndef B_HPP
# define B_HPP

#include "Base.hpp"

class B : public Base
{
    public:
        B();
        B(const B& a);
        B& operator=(const B& a);
        virtual ~B();
};

#endif