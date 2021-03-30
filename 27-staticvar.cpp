#include <iostream>

void increment_and_print() {
    static int value = {1};
    ++value;
    std::cout << value << '\n';
}

int main() {
    increment_and_print();
    increment_and_print();
    increment_and_print();
    return 0;
}