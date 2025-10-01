#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    
    // Typedef for pointer to member function
    // typedef void (Harl::*ComplaintFunction)();
    
    // Struct to map level strings to member functions
    struct ComplaintLevel {
        std::string level;
        void (Harl::*function) ();
    };
    
    static ComplaintLevel levels[4];

public:
    void complain( std::string level );
};

#endif