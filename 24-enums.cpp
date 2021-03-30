#include <iostream>

enum Colors {
    red,
    green = 50,
    blue
};

enum Outputs {
    success,
    error_open,
    error_read,
    error_permission
};

int main() {
    Colors c;
    Outputs o;

    std::cout << "The value of red color is " << red << '\n';
    std::cout << "The value of green color is " << green << '\n';
    std::cout << "The value of blue color is " << blue << '\n';

    return success;
}