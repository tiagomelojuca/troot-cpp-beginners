#include <iostream>

int main() {

    int myvar = 100;
    // lvalue   rvalue

    int v; // fine
    char first_letter; // also fine
    double _y; // fine too
    // int 9x;          - bad
    // int x, int y;    - wrong
    // int z, float r;  - wrong too
    char word; int z8; // good

    // char a = "A"; - bad
    char a = 'A'; // good
    // char hello[] = 'hello'; - bad
    char hello[] = "hello"; //good
    // we must use single quote to chars and double quotes to strings
    // note that \n, \0 etc are chars also

    // types of initialization
    char letter = 'c'; // copy initialization
    double z {}; // uniform initialization
    int x(10); // direct initialization

    std::cout << "The value of var is: " << hello << '\n';
    return 0;

}