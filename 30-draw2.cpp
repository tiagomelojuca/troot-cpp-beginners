#include <iostream>

int main(int argc, char *argv[]) {

    int max_i = 10;
    int max_j = 20;

    if(argc > 2) {
        max_i = std::stoi(argv[1]);
        max_j = std::stoi(argv[2]);
    }

    for(int i = 0; i <= max_i; i++) {
        if(i == 0) {
            std::cout << "\u250C"; // top left corner
            for(int j = 0; j <= max_j; j++) {
                if(j == max_j) {
                    std::cout << "\u2510"; // top right corner
                } else {
                    std::cout << "\u2500"; // top horizontal line
                }
            }
            std::cout << '\n';
        } else {
            if(i == max_i) {
                std::cout << "\u2514"; // bottom left corner
            } else {
                std::cout << "\u2502"; // left vertical line
            }
            // std::cout << "|";
            for(int j = 0; j <= max_j; j++) {
                if(j == max_j) {
                    if(i == max_i) {
                        std::cout << "\u2518"; // bottom right corner
                    } else {
                        std::cout << "\u2502"; // right vertical line
                    }
                } else {
                    if(i == max_i) {
                        std::cout << "\u2500"; // bottom horizontal line
                    } else {
                        std::cout << " ";
                    }
                }
            }
            std::cout << '\n';
        }
    }

    return 0;
}