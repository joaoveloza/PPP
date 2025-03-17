#include <iostream>

int main() {
 std::cout << "Enter two integers: ";
 int val1 {0};
 int val2 {0};
 std::cin >> val1 >> val2;
 if(val1 >val2) 
   std::cout << "The smaller number is " << val2 << " and the larger number is " << val1 << ".\n";
   else
   std::cout << "The smaller number is " << val1 << " and the larger number is " << val2 << ".\n";

  std::cout << val1 << " + " << val2 << " = " << val1+val2 << '\n';
  std::cout << val1 << " - " << val2 << " = " << val1-val2 << '\n';
  std::cout << val1 << " * " << val2 << " = " << val1*val2 << '\n';
  std::cout << val1 << " / " << val2 << " = " << val1/val2 << '\n';
}
