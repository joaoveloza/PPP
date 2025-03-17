#include <iostream>

int main() {
    std::cout << "Please enter the number of miles you want to convert to kilometers: ";
    double miles {0.0};
    std::cin >> miles;
    std::cout << miles << " miles are equivalent to " << miles*1.609 << " kilometers.\n";
    return 0;
}