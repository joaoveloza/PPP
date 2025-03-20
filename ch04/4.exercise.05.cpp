#include <iostream>

int main() {
    std::cout << "Enter two double values and an arithmetic operation.\n";
    double val1 {0};
    double val2 {0};
    char operation {' '};



    std::cin >> val1 >> val2 >> operation;

    switch (operation)
    {
    case '+':
        std::cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2;
        break;
    case '-':
        std::cout << "The subtraction of " << val1 << " and " << val2 << " is " << val1 - val2;
        break;
    case '*':
        std::cout << "The multiplication of " << val1 << " and " << val2 << " is " << val1 * val2;
        break;
    case '/':
        std::cout << "The division of " << val1 << " and " << val2 << " is " << val1 / val2;
        break;
    default:
        std::cout << "The operator " << operation << " is not supported!\n";
        break;
    }
}