#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : zombieName(name) {}

Zombie::~Zombie() {
    std::cout << zombieName << " has been destryed." << std::endl;
}

void Zombie::announce() {
    std::cout << zombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
