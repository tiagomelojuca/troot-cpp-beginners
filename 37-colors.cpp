#include <iostream>

int main() {
    for(int i = 30; i < 40; i++) {
        for(int j = 0; j < 6; j++) {
            std::cout << "\e[" << i << ";" << j << "m COLOR" << "\e[m ";
        }
    }
    return 0;
}