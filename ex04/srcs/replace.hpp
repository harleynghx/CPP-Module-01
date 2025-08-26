#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <iostream>
#include <fstream>


class FileReplacer {
private:
    static std::string replaceInLine(const std::string& line, 
                                   const std::string& s1, 
                                   const std::string& s2);
    
public:
    static void replaceInFile(const std::string& filename, 
                            const std::string& s1, 
                            const std::string& s2);
};

#endif