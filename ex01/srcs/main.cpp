#include "Zombie.hpp"


int main() {
    std::string HordeName;
    int HordeNb;

    std::cout << "Name the Zombie Horde :";
    std::getline(std::cin, HordeName);

    std::cout << "Number of Zombies :";
    std::cin >> HordeNb;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
    // Create horde of zombies
    Zombie* horde = zombieHorde(HordeNb, HordeName);
    
    if (horde == nullptr) {
        std::cout << "Failed to create zombie horde!" << std::endl;
        return 1;
    }
    
    // Make each zombie announce itself
    for (int i = 0; i < HordeNb; i++) {
        horde[i].announce();
    }
    
    // Delete the entire horde (single deletion for array)
    delete[] horde;
    
    return 0;
}