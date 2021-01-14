#include "ZombieHorde.hpp"

std::string ZombieHorde::namepool[10] = {
    "Alice", "Bob", "Carol", "Dave", "Eve", "Faythe", "Grace", "Heide", "Isaac", "Justin"};

ZombieHorde::ZombieHorde() {}

ZombieHorde::~ZombieHorde() {
    delete[] zombies;
}

ZombieHorde::ZombieHorde(int N)
{
    this->N = N;
    zombies = new Zombie[N];
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 9);
    for (int i = 0; i < N; i++)
        zombies[i].setName(namepool[dis(gen)]);
}

void ZombieHorde::announce() {
    for (int i = 0; i < N; i++)
        zombies[i].announce();
}