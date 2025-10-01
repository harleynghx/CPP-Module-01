#include "Harl.hpp"

void Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

// Initialize static array (C++98 style)
Harl::LevelFunction Harl::levelFunctions[4] = {
    {"DEBUG", &Harl::debug},
    {"INFO", &Harl::info},
    {"WARNING", &Harl::warning},
    {"ERROR", &Harl::error}
};

int Harl::getLevelIndex(const std::string& level) {
    for (int i = 0; i < 4; ++i) {
        if (level == levelFunctions[i].level) {
            return i;
        }
    }
    return -1;
}

void Harl::filter(const std::string& level) {
    int selectedLevel = getLevelIndex(level);
    
    if (selectedLevel == -1) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return;
    }
    
    switch (selectedLevel) {
        case 0: // DEBUG
            std::cout << "[ DEBUG ]" << std::endl;
            debug();
            // fall through
        case 1: // INFO
            std::cout << "[ INFO ]" << std::endl;
            info();
            // fall through
        case 2: // WARNING
            std::cout << "[ WARNING ]" << std::endl;
            warning();
            // fall through
        case 3: // ERROR
            std::cout << "[ ERROR ]" << std::endl;
            error();
            break;
    }
}
