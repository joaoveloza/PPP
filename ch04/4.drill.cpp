#include <iostream>

const double TOLERANCE {1.0/100};

double min(double a, double b) {
 if (a > b)
  return b;
 else
  return a;
}

double max(double a, double b) {
 if (a > b)
  return a;
 else
  return b;
}

bool almost_equal(double a, double b) {
 if (abs(a - b) <= TOLERANCE)
  return true;
 else
  return false;
}

int main() {
 std::cout << "Enter two integer values: ";
 double val1 {0};
 double val2 {0};

 while (std::cin >> val1 >> val2) {
   if (val1 == val2) {
    std::cout << "The numbers are equal.\n";
   }
   else {
    std::cout << "The smaller value is: " << min(val1, val2) << ".\n";
    std::cout << "The larger value is: " << max(val1, val2) << ".\n";

    if (almost_equal(val1, val2))
	  std::cout << "The numbers are almost equal.";
   }
}
}
