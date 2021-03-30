#include <iostream>
#include <cstdlib>

int main() {

    std::string home = getenv("HOME");

    std::cout << "Your $HOME is: " << home << '\n';
    std::cout << "Your $SHELL is: " << getenv("SHELL") << '\n';

    // std::cout << "The files in your current dir are: \n" << system("ls") << '\n';
    std::cout << "The files in your current dir are: \n";
    system("ls");
    return 0;
    
}