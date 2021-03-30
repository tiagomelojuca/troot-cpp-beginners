#include <iostream>
#include <vector>

int main() {

    std::vector<std::string> vet = {"JavaScript", "C++", "PHP", "Python"};
    std::vector<std::string>::iterator init = vet.begin();
    
    std::cout << "The first element is: " << *init << '\n';

    vet.pop_back();
    std::vector<std::string>::iterator last = vet.end();
    std::cout << "The first element is: " << *last << '\n';

    vet.push_back("Elixir");
    std::cout << "The first element is: " << *last << '\n';

    std::cout << "The size of our vet is: " << vet.size() << '\n';

    return 0;

}