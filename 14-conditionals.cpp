#include <iostream>
using namespace std;

int main() {

    int var = 29;

    if(var == 30) {
        cout << "The value of var is: " << var << '\n';
    } else if(var == 31) {
        cout << "The value of var is 31, see: " << var << '\n';
    } else {
        cout << "Var is not 30 or 31, it is: " << var << '\n';
    }

    if(var == 30) {
        cout << "The value of var is: " << var << '\n';
    } else if(var == 31) {
        cout << "The value of var is 31, see: " << var << '\n';
    } else cout << "Var is not 30 or 31, it is: " << var << '\n';

    switch(var) {
        case 30:
            cout << "The value of var is: " << var << '\n';
            break;
        case 31:
            cout << "The value of var is 31, see: " << var << '\n';
            break;
        default:
            cout << "Var is not 30 or 31, it is: " << var << '\n';
            break;
    }

    var == 29 ? cout << "The var is 29\n" : cout << "It is not 29\n";
    cout << (var == 29 ? "The var is 29\n" : "It is not 29\n");
    cout << (var == 29) ? "The var is 29\n" : "It is not 29\n"; // ops

    return 0;

}