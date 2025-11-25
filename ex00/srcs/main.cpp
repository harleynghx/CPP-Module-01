#include "Zombie.hpp"

int main() {

    Zombie* var_zb = newZombie("Foo");
    var_zb->announce();
    delete var_zb;

    randomChump("Bar");

    return 0;
}
