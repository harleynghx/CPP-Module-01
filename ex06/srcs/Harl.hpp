#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
private:
    void debug();
    void info();
    void warning();
    void error();
    
    typedef void (Harl::*ComplainFunction)();

    struct LevelFunction {
        std::string level;
        ComplainFunction function;
    };
    
    static LevelFunction levelFunctions[4];
    
    int getLevelIndex(const std::string& level);

public:
    void filter(const std::string& level);
};

#endif