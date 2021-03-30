#include <iostream>
#include <cstdlib>

void draw(int, int);

int main(int argc, char *argv[]) {

    int max_i = 10;
    int max_j = 20;
    std::string s;

    if(argc > 1) {
        s = argv[1];
        if(s == "-a") {
            for(int i = 0; i < 40; i++) {
                draw(i + 2, i + 2);
                system("sleep 0.03");
                system("clear");
            }
        } else {
            if(argc > 2) {
                max_i = std::stoi(argv[1]);
                max_j = std::stoi(argv[2]);
            }

            draw(max_i, max_j);
        }
    }

    return 0;
}

void draw(int max_i, int max_j) {
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
}