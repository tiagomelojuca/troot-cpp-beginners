#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {

    std::string first_line, second_line;
    std::ofstream myfile;

    myfile.open("file.txt");
    //overwrite
    // myfile.open("file.txt", std::ios_base::app);
    //append

    std::cout << "Inform a line: ";
    std::getline(std::cin, first_line);
    std::cout << "Inform a new line: ";
    std::getline(std::cin, second_line);

    myfile << first_line << '\n';
    myfile << second_line << '\n';

    myfile.close();

    std::cout << "Data written sucessfully!" << '\n';

    return 0;

}