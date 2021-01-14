#include "ZombieEvent.hpp"

std::string ZombieEvent::namepool[4] = {
    "yapark", "jinbkim", "kycho", "jakang"
};

ZombieEvent::ZombieEvent() {
    type = "default";
}

void ZombieEvent::setZombieType(std::string type) {
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    Zombie* zombie = new Zombie(name, type);
    return zombie;
}

void ZombieEvent::randomChump() {
    srand(time(NULL));
    Zombie zombie(namepool[rand()%4], type);
    zombie.announce();
}