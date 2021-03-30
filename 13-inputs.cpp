#include <iostream>

int main() {

    const int total {99};
    char str[total];

    std::cout << "Enter a text: ";
    std::cin.getline(str, total);
    std::cout << "The text is: " << str << '\n';

    std::string word;
    
    std::cout << "Enter a letter: ";
    std::getline( std::cin, word );
    std::cout << "The word you've type is: " << word << '\n';
    return 0;
}