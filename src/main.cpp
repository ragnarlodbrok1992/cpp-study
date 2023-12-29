#include <iostream>
#include <string>

// Local includes 
#include "ruleofthree.hpp"

// @TODO: versioning convention for study program
const std::string VERSION = "0.0.1";

// @TODO: subtopics initialization - every topic has a subtopic
// @TODO: add some more topics
const std::string LIST_OF_TOPICS[] = {
    "C++ 11 CONCEPTS",
    "C++ 14 CONCEPTS",
    "C++ 17 CONCEPTS",
    "PRINCIPLES OF DESIGN"
};

void help_message() {
  // @TODO: create help message
  std::cout << "usage: cpp-study [concept]\n";
  std::cout << "  options:\n";
}

int main(int argc, char** argv) {
    // Reading CLI variables
    if (argc < 2) {
        // std::cout << "No arguments provided.\n";
        // @TODO: Add help message
        help_message();
        return 0;
    } else {
        std::cout << "Arguments provided:\n";
        for (int i = 1; i < argc; i++) {
            std::cout << " - " << argv[i] << "\n";
        }
    }

    // Intro message
    std::cout << "C++ study application - alpha version.\n";

    // Some code

    // Exit message
    std::cout << "All went well - goodbye.\n";
    return 0;
}
