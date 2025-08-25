#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : nameB(name), weaponB(nullptr) {}

void HumanB::setWeapon(Weapon& weapon) {
    this->weaponB = &weapon;
}

void HumanB::attack() const {
    if (weaponB) {
        std::cout << nameB << " attacks with their " << weaponB->getType() << std::endl;
    } else {
        std::cout << nameB << " has no weapon to attack with!" << std::endl;
    }
}
