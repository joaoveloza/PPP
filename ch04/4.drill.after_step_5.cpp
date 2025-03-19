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
 std::cout << "Enter a value: ";
 double val {0.0};
 double min {0.0};
 double max {0.0};
 int count {0};

 while (std::cin >> val) {
   std::cout << "The number entered is " << val << '\n';
   if (count == 0) {
    std::cout << val 
	<< " is the first number, the smallest and largest so far.\n";
    min = val;
	max = val;
   }
   else if (min > val) {
    min = val;
	std::cout << "The smallest so far.\n";
   }
   else if (max < val) {
   max = val;
   std::cout << "The largest so far.\n";
   }
 count++;
}
 return 0;
}
