#include <iostream>
#include <vector>

const std::vector<std::string> names {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
const std::vector<char> operations {'+', '-', '*', '/'};

int get_number(std::string name) {
    int result {-1};
    for (size_t i = 0; i < names.size(); i++)
       if (names[i] == name) result = i;

       return result;
}

bool is_operation_valid(char operation) {
    bool result {false};
    for (char op: operations) {
       if (operation == op)
        result = true;
    }
    return result;
}

int main() {
    std::cout << "Enter two integer values or cipher name to get the number and an arithmetic operation.\n";
    int val1 {0};
    int val2 {0};
    std::string name {""};
    bool done {false};
    char operation {' '};
    
    std::cout << "Insert the first value: ";
    while (!done) {
            if (std::cin >> val1) {
                if (val1 < 0 || val1 > 9)
                std::cout << "Not a single digit number...\n";
                else
                done = true;
            }
            else {
                std::cin.clear();
                std::cin >> name;
                val1 = get_number(name);
                if (val1 == -1)
                std::cout << "Not a valid number. Try again...\n";
                else
                done = true;
            }
    }
    
    done = false;
    std::cout << "Insert the second value: ";
    while (!done) {
            if (std::cin >> val2) {
                if (val2 < 0 || val2 > 9)
                std::cout << "Not a single digit number...\n";
                else
                done = true;
            }
            else {
                std::cin.clear();
                std::cin >> name;
                val2 = get_number(name);
                if (val2 == -1)
                std::cout << "Not a valid number. Try again...\n";
                else
                done = true;
            }
    }
    
    done = false;
    std::cout << "Insert an operation: ";
    while (!done) {
        std::cin >> operation;
        if (is_operation_valid(operation))
        done = true;
        else
        std::cout << "Not a valid operation. Try again...\n";
    }
    
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