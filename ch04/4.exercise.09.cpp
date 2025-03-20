#include <iostream>

int main() {
 int rice {0};
 int square_rice {1};
 double drice {0};
 double dsquare_rice {1};

 for (int square = 1; square <= 1050; ++square) {
  rice += square_rice;
  drice += dsquare_rice;
  square_rice *= 2;
  dsquare_rice *= 2;

  std::cout << "Square " << square << ": int rice (" << rice << "), double rice (" << drice << ")\n";
 }

 return 0;
}
