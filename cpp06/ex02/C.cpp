#include "C.hpp"

C::C() : Base::Base() {}

C::C(const C& a) : Base::Base() {}

C& C::operator=(const C& a) { return *this; }

C::~C() {}