#include <iostream>

int main() {
 std::cout << "Enter an operation, followed by two operands: ";
 std::string operation {" "};
 double operand1 {0.0};
 double operand2 {0.0};
 std::cin >> operation >> operand1 >> operand2;

 if (operation == "+" || operation == "plus")
   std::cout << operand1 << "+" << operand2 << " = " << operand1 + operand2 << '\n';
 else if (operation == "-" || operation == "minus")
   std::cout << operand1 << "-" << operand2 << " = " << operand1 - operand2 << '\n';
 else if (operation == "*" || operation == "mul")
   std::cout << operand1 << "*" << operand2 << " = " << operand1 * operand2 << '\n';
 else if (operation == "/" || operation == "div")
   std::cout << operand1 << "/" << operand2 << " = " <<  operand1 / operand2 << '\n';
 else
   std::cout << "Operator " << operation << " is not known.\n";
}
