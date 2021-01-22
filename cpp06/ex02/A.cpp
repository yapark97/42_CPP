#include "A.hpp"

A::A() : Base::Base() {}

A::A(const A& a) : Base::Base() {}

A& A::operator=(const A& a) { return *this; }

A::~A() {}