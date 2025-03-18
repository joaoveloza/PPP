#include <iostream>

int main() {
 char c {'a'};
 std::cout << "char" << '\t' << "int value" << '\n';

 while (c <= 'z') {
  std::cout << c << '\t' << int(c) << '\n';
  c++;
 }

 return 0;
}
