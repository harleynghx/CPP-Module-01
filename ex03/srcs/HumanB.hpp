#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
private:
    std::string nameB;
    Weapon* weaponB;  // Pointer - can be null

public:
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
    void attackB() const;
};

#endif