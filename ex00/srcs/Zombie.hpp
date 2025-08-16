#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string zombieName;
public:
    Zombie(std::string zombieName);
    ~Zombie();
    void announce();
};

Zombie* newZombie(std::string zombieName);
void randomChump(std::string zombieName);

#endif