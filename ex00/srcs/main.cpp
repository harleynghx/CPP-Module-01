#include "Zombie.hpp"

int main() {

    Zombie* zombie1 = newZombie("Foo");
    zombie1->announce();
    delete zombie1;

    // Stack allocation (auto-destroyed)
    randomChump("Bar");

    return 0;
}
