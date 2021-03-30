#include <iostream>

struct customer {
    std::string first_name;
    std::string last_name;
    int enrollment;
};

void show_data(struct customer c) {
    std::cout << "\n:::: CUSTOMER DATA ::::" << '\n';
    std::cout << c.first_name << " " << c.last_name << " - " << c.enrollment << '\n';
}

struct customer get_data() {
    
    struct customer c;

    std::cout << "Inform the customer's first name: ";
    std::getline(std::cin, c.first_name);

    std::cout << "Inform the customer's last name: ";
    std::getline(std::cin, c.last_name);

    std::cout << "Inform the customer's enrollment number: ";
    std::cin >> c.enrollment;

    return c;
    
}

int main(int argc, char *argv[]) {
    std::cout << "\n:::: CUSTOMER ADD ::::" << '\n';
    struct customer customer_data;
    customer_data = get_data();
    show_data(customer_data);
    return 0;
}