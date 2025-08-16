#include "Zombie.hpp"

int main() {

    Zombie* zombie = newZombie("Foo");
    zombie->announce();
    delete zombie;

    // Stack allocation (auto-destroyed)
    randomChump("Bar");

    return 0;
}
