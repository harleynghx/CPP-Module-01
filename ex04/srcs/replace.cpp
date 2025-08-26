#include "replace.hpp"
#include <fstream>

void FileReplacer::replaceInFile(const std::string& filename, 
                               const std::string& s1, 
                               const std::string& s2) {
    // Open input file
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }
    
    // Create output filename
    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not create file " << outputFilename << std::endl;
        inputFile.close();
        return;
    }
    
    // Read and process file line by line
    std::string line;
    while (std::getline(inputFile, line)) {
        std::string processedLine = replaceInLine(line, s1, s2);
        outputFile << processedLine;
        if (!inputFile.eof()) {
            outputFile << std::endl; // Add newline except for last line
        }
    }
    
    // Close files
    inputFile.close();
    outputFile.close();
    
    std::cout << "Replacement complete. Output file: " << outputFilename << std::endl;
}

std::string FileReplacer::replaceInLine(const std::string& line, 
                                      const std::string& s1, 
                                      const std::string& s2) {
    std::string result = line;
    size_t pos = 0;
    size_t s1_len = s1.length();
    size_t s2_len = s2.length();
    
    // Replace all occurrences of s1 with s2 in the line
    while ((pos = result.find(s1, pos)) != std::string::npos) {
        result.erase(pos, s1_len);
        result.insert(pos, s2);
        pos += s2_len; // Move past the replaced string
    }
    
    return result;
}