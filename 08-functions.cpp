#include <iostream>

void my_func() {
    std::cout << "Hello, World!" << '\n';
}

int sum(int a, int b) {
    return a + b;
}

int func_prototype(int, int); // declaration

int main() {
    my_func();
    std::cout << "The value of sum is: " << sum(3, 9) << '\n';
    std::cout << "The value of sum is: " << sum(5, 5) << '\n';
    std::cout << "The value of sum is: " << sum(2, 3) << '\n';
    func_prototype(1, 3);
    return 0;
}

int func_prototype(int a, int b) { // definition
    std::cout << "this also works and the value is: " << a + b << '\n';
    return a + b;
};