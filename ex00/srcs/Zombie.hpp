#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string zombieName;
public:
    Zombie(std::string name) : zombieName(name) {}
    ~Zombie() {
        std::cout << zombieName << " has been destryed." << std::endl;
    }
    void announce() {
        std::cout << zombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
};

Zombie* newZombie(std::string zombieName);
void randomChump(std::string zombieName);

#endif