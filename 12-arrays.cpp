#include <iostream>

void receive_arr(int arr[]) { //param by ref
    arr[3] = 88;
}

void receive_var(int a) { //param by copy
    a = 12;
}

int main() {
    int nums[] = {11, 22, 33, 44, 55};

    int var {66};

    std::cout << "Value of var BEFORE func: " << var << '\n';
    receive_var(var);
    std::cout << "Value of var AFTER func: " << var << '\n';

    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    std::cout << "Value of pos 3 BEFORE func: " << nums[2 + 1] << '\n';
    receive_arr(nums);
    std::cout << "Value of pos 3 AFTER func: " << nums[2 + 1] << '\n';

    std::cout << "Size of array is: " << sizeof(nums) << '\n';
    std::cout << "Size of array's pos 2 is: " << sizeof(nums[2]) << '\n';
    std::cout << "The amount of items is: " << sizeof(nums) / sizeof(nums[0]) << '\n';
    // we use arr[0] because it always exist

    return 0;
}