#include <iostream>

int square(int value) {
 int x {0};
 for (int i = 0; i < value; i++) {
  x += value;
 }
 return x;
}

int main() {
 for (int i = 0; i < 100; i++)
  std::cout << i << '\t' << square(i) << '\n';
 return 0; 
}
