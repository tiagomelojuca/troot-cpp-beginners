#include <iostream>

int main() {

    // implicit convertion
    double d = 3.96;
    int i = d; //works, but there is data loss
    char a = 'a';
    std::cout << "Value of d: " << d << '\n';
    std::cout << "Value of i: " << i << '\n';

    i = a + i; // works too
    std::cout << "Value of a + i: " << i << '\n';

    // explicit conversion
    int x, y;
    double z = 9.87;
    x = (int)z; //cast notation
    y = int(z); //functional notation

    std::cout << "z is: " << z << " x is: " << x << " y is: " << y << '\n';

    return 0;
}