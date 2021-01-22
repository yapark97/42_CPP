#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>

Base *generate(void)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 2);
    int select = dis(gen);
    if (select == 0)
        return new A();
    if (select == 1)
        return new B();
    if (select == 2)
        return new C();
    return 0;
}

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
    A a;
    Base &ref = a;
    identify_from_reference(ref);

    Base *b1 = generate();
    identify_from_pointer(b1);
    delete b1;
}