#include "Zombie.hpp"

Zombie::Zombie() {
    this->name = "annony";
    this->type = "default";
}

Zombie::Zombie(std::string name, std::string type) {
    this->name = name;
    this->type = type;
}

void Zombie::announce() {
    std::cout<<"<"<<name<<" ("<<type<<")> Braiiiiiiinnnssss..."<<std::endl;
}