#include <iostream>

int main() {

    int number {369};
    int* p_number = &number;

    std::cout << "The value of number is: " << number << '\n';
    std::cout << "The value of p_number is: " << p_number << '\n';
    std::cout << "The value of *p_number is: " << *p_number << '\n';
    return 0;
    
}