#include "B.hpp"

B::B() : Base::Base() {}

B::B(const B& a) : Base::Base() {}

B& B::operator=(const B& a) { return *this; }

B::~B() {}