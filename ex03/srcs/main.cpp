#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attackA();
        club.setType("some other type of club");
        bob.attackA();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attackB();
        club.setType("some other type of club");
        jim.attackB();
    }
    return 0;
}
