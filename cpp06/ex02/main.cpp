#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout<<"A"<<std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout<<"B"<<std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout<<"C"<<std::endl;
}

void identify_from_reference(Base &p)
{
    Base *ptr = &p;
    identify_from_pointer(ptr);
}

int main()
{
    Base *a = new A();
    B b;
    Base &ref = b;
    Base *c = new C();
    
    identify_from_pointer(a);
    identify_from_reference(ref);
    identify_from_pointer(c);
}