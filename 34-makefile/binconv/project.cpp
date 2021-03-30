#include "project.h"

void _help() {
    std::cout << "Usage: ./binconv [--param] [number]\n"
              << "  --dec2bin  Convert decimal to binary\n"
              << "  --bin2dec  Convert binary to decimal\n";
}

void dec2bin(int num) {
    int binary_arr[32], i = 0;

    while(num > 0) {
        binary_arr[i] = num % 2;
        num /= 2;
        i++;
    }

    for(int k = i - 1; k >= 0; k--) {
        std::cout << binary_arr[k];
    }

    std::cout << std::endl;
}

int bin2dec(int num) {
    int last_digit, num_dec, base = 1;
    last_digit = 0;
    num_dec = 0;

    while(num) {
        last_digit = num % 2;
        num /= 10;
        num_dec += last_digit * base;
        base *= 2;
    }

    return num_dec;
}

void _start(int argc, char *argv[]) {
    if(argc > 2) {
        std::string param = argv[1];
        int number = std::stoi(argv[2]);
        if(param == "--dec2bin" || param == "-b") {
            dec2bin(number);
        } else if(param == "--bin2dec" || "-d") {
            std::cout << bin2dec(number) << '\n';
        } else {
            _help();
        }
    } else {
        _help();
    }
}