#include <iostream>

int main() {
 std::cout << "Insert an integer value you want to check if it is even or odd: ";
 int val1 {0};
 std::cin >> val1;
 if (val1 % 2 == 0)
   std::cout << "The value is even." << '\n';
 else
  std::cout << "The value is odd." << '\n';

  return 0;
}
