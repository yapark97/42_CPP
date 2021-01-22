#include "B.hpp"

B::B() : Base::Base() {
    std::cout<<"* B generated *"<<std::endl;
}

B::B(const B& a) : Base::Base() { (void)a; }

B& B::operator=(const B& a) { (void)a; return *this; }

B::~B() {}