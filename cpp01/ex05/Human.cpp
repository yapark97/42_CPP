#include "Human.hpp"

Human::Human() {}

std::string Human::identify() const{
    return brain.identify();
}

const Brain& Human::getBrain() const{
    const Brain& ref = brain;
    return ref;
}