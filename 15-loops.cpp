#include <iostream>

int main() {
    std::cout << "Hard Coded -------------\n";
    std::cout << "Printing 1\n";
    std::cout << "Printing 2\n";
    std::cout << "Printing 3\n";
    std::cout << "Printing 4\n";

    int i;
    std::cout << "\nWhile starting from 0 -------------\n";
    i = 0;
    while(i < 4) {
        std::cout << "Printing " << i << '\n';
        i++;
    }

    std::cout << "\nWhile starting from 0 going until 4 -------------\n";
    i = 0;
    while(i <= 4) {
        std::cout << "Printing " << i << '\n';
        i++;
    }

    std::cout << "\nWhile starting from 1 -------------\n";
    i = 1;
    while(i <= 4) {
        std::cout << "Printing " << i << '\n';
        i++;
    }

    i = 100;
    do {
        std::cout << "\nThis will execute at least once\n";
    } while( i != 100 );

    std::cout << "\nFOR loop 1 -------------\n";
    std::string singers[] = {"Tim Maia", "Elis Regina", "Jorge Vercilo"};
    int total = sizeof(singers) / sizeof(singers[0]);

    for(i = 0; i < total; i++) {
        std::cout << "The " << i << " is: " << singers[i] << '\n';
    }

    std::cout << "\nFOR loop 2 -------------\n";
    for(auto i: singers) {
        std::cout << "We have " << i << '\n';
    }

    return 0;
}