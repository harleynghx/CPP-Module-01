#include "Zombie.hpp"

Zombie* newZombie(std::string zombieName) {
    Zombie* zombie = new Zombie(zombieName);
    return zombie;
}
