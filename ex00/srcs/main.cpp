#include "Zombie.hpp"

int main() {

    Zombie* var_zb = newZombie("Foo");
    var_zb->announce();
    delete var_zb;

    // Stack allocation (auto-destroyed)
    randomChump("Bar");

    return 0;
}
