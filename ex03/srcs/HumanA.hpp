#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
private:
    std::string nameA;
    Weapon& weaponA;

public:
    HumanA(std::string name, Weapon& weapon);
    void attackA() const;
};

#endif
