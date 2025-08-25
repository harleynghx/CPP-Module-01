#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : nameA(name), weaponA(weapon) {}

void HumanA::attackA() const {
    std::cout << nameA << " attacks with their " << weaponA.getType() << std::endl;
}
