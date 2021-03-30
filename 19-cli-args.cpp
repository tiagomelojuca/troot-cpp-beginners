#include <iostream>

int main(int argc, char* argv[]) {

    if(argc > 1) {
        std::string arg = argv[1];
        arg == "--help" || arg == "-h"
            ? std::cout << "This is a help menu\n"
            : std::cout << "Usage: --help or -h\n";
    } 

    std::cout << "-----------------------" << '\n';
    std::cout << "Quantity of args: " << argc << '\n';
    std::cout << "The first arg is: " << argv[0] << '\n';

    return 0;

}