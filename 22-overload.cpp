#include <iostream>
using namespace std;

void function() {
    cout << "Function as void\n";
}

int function(int a) {
    return a;
}

int function(int a, int b) {
    return a * b;
}
// works fine

// int function(int a, int b = 2) {
//     return a * b;
// }
// doesnt work because b is optional

int function(int a, char b) {
    return a * b;
}
// also works fine

int main() {
    function();
    cout << function(2) << " "
         << function(2, 3) << " "
         << function(2, 'c')
         << '\n';
    return 0;
}