#include "A.hpp"

A::A() : Base::Base() {}

A::A(const A& a) : Base::Base() { (void)a; }

A& A::operator=(const A& a) { (void)a; return *this; }

A::~A() {}