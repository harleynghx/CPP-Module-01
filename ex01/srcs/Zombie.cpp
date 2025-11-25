#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::Zombie(std::string name) : _name(name) {};

Zombie::~Zombie() {
    std::cout << _name << " is Destroyed" << std::endl;
}

void Zombie::announce() {
    std::cout << _name << " says HI! " << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}
