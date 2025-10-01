#include <iostream>
#include <string>

int main() {
    // The string variable
    std::string str = "HI THIS IS BRAIN";
    
    // stringPTR: A pointer to the string
    std::string *stringPTR = &str;
    
    // stringREF: A reference to the string
    std::string &stringREF = str;

    
    // Print memory addresses
    std::cout << "Memory addresses:" << std::endl;
    std::cout << "• Address of string variable: " << &str << std::endl;
    std::cout << "• Address held by stringPTR:  " << stringPTR << std::endl;
    std::cout << "• Address held by stringREF:  " << &stringREF << std::endl;
    
    std::cout << std::endl;
    
    // Print values
    std::cout << "Values:" << std::endl;
    std::cout << "• Value of string variable:  " << str << std::endl;
    std::cout << "• Value pointed by stringPTR: " << *stringPTR << std::endl;
    std::cout << "• Value pointed by stringREF: " << stringREF << std::endl;
    
    return 0;
}