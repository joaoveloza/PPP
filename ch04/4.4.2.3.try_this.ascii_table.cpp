#include <iostream>

int main() {
 std::cout << "char" << '\t' << "int value" << '\n';

 for (char c = 'a'; c <= 'z'; c++) {
   std::cout << c << '\t' << int(c) << '\n';
 }
 
 for (char c = 'A'; c <= 'Z'; c++) {
   std::cout << c << '\t' << int(c) << '\n';
 }

 for (char c = '0'; c <= '9'; c++) {
   std::cout << c << '\t' << int(c) << '\n';
 }


 return 0;
}
