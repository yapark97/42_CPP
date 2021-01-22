#include "C.hpp"

C::C() : Base::Base() {
    std::cout<<"* C generated *"<<std::endl;
}

C::C(const C& a) : Base::Base() { (void)a; }

C& C::operator=(const C& a) { (void)a; return *this; }

C::~C() {}