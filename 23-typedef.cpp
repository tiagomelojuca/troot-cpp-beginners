#include <iostream>

typedef struct customer {
    std::string first_name;
    std::string last_name;
    int enrollment;
} t_customer;

// typedef struct {
//     std::string first_name;
//     std::string last_name;
//     int enrollment;
// } t_customer;
//
// It would also work, but let's keep both,
// customer and t_customer identifiers.
// The identifier doesn't matter, we could use just
// "customer" instead of "t_customer", but the t_
// preffix is a good practice.

void show_data(t_customer c) {
    std::cout << "\n:::: CUSTOMER DATA ::::" << '\n';
    std::cout << c.first_name << " " << c.last_name << " - " << c.enrollment << '\n';
}

t_customer get_data() {
    
    t_customer c;

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
    t_customer customer_data;
    customer_data = get_data();
    show_data(customer_data);
    return 0;
}