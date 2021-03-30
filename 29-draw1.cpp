#include <iostream>

int main(int argc, char *argv[]) {

    int max_i = 10;
    int max_j = 20;

    if(argc > 2) {
        max_i = std::stoi(argv[1]);
        max_j = std::stoi(argv[2]);
    }

    for(int i = 0; i <= max_i; i++) {
        if(i == 0 || i == max_i) {
            std::cout << "+";
            for(int j = 0; j <= max_j; j++) {
                if(j == max_j) {
                    std::cout << "+";
                } else {
                    std::cout << "-";
                }
            }
            std::cout << '\n';
        } else {
            std::cout << "|";
            for(int j = 0; j <= max_j; j++) {
                if(j == max_j) {
                    std::cout << "|";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << '\n';
        }
    }

    return 0;
}