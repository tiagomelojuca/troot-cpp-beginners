#include <iostream>
#include <cstdlib>

int factorial(int number) {
    return (number <= 1) ? 1 : number * factorial(number - 1);
}

int fibonacci(int number) {
    return (number <= 1) ? 1 : fibonacci(number - 1) + fibonacci(number - 2);
}

int main(int argc, char* argv[]) {

    if( argc > 1 ) {
        int mynum = atoi(argv[1]);
        // std::cout << "The factorial is " << factorial(mynum) << '\n';
        for(int i = 0; i < mynum; i++) std::cout << " " << fibonacci(i);
    } else {
        std::cout << "Please inform a number." << '\n';
    }

    return 0;

}