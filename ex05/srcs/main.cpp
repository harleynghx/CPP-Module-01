#include "Harl.hpp"
#include <iostream>

int main() {
    Harl harl;
    
    std::cout << "=== Testing Harl's Complaints ===" << std::endl;
    
    // Test all levels
    std::cout << "\n1. DEBUG level:" << std::endl;
    harl.complain("DEBUG");
    
    std::cout << "\n2. INFO level:" << std::endl;
    harl.complain("INFO");
    
    std::cout << "\n3. WARNING level:" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "\n4. ERROR level:" << std::endl;
    harl.complain("ERROR");
    
    // Test invalid level
    std::cout << "\n5. Invalid level:" << std::endl;
    harl.complain("CRITICAL");
    
    // Test case sensitivity
    std::cout << "\n6. Case sensitive test:" << std::endl;
    harl.complain("debug"); // Should show unknown
    
    return 0;
}