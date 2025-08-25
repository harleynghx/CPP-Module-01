#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::Zombie(std::string name) : name(name) {};

Zombie::~Zombie() {
    std::cout << name << " is Destroyed" << std::endl;
}

void Zombie::announce() {
    std::cout << name << " says HI! " << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}
