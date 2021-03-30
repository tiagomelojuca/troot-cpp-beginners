#include <iostream>
#define PI 3.14

int main() {
    const double pi = 6.28; //works
    // int PI = 30; - bad, already defined via macro
    std::cout << "The value of PI is: " << PI << '\n';
    std::cout << "The value of pi is: " << pi << '\n';
    return 0;
}