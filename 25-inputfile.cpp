#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    std::string line;
    bool shouldShowLineNum {true};
    std::string param;
    int currentLine = {1};

    if(argc > 1) {
        param = argv[1];
        if(param == "--number" || param == "-n") {
            shouldShowLineNum = true;
        }
    }

    std::ifstream myfile("file.txt");
    if( myfile.is_open() ) {
        while(getline(myfile, line))
            shouldShowLineNum
                ? std::cout << currentLine++ << "\u2502 " << line << '\n'
                : std::cout << line << '\n';
        myfile.close();
    } else {
        std::cout << "Couldn't open the file.";
    }

    return 0;

}