#include <iostream>
#include<cmath>

int main() {
 double a {0};
 double b {0};
 double c {0};

 std::cout << "Insert the coefficients a, b and c of a quadratic equation (ax² + bx + c = 0):\n";
 std::cin >> a >> b >> c;

 if (a == 0)
   std::cout << "If coefficient a is zero, this is not a quadratic equation.\n";
 else {
   // if (b*b - 4*a*c) is negative, the solution is imaginary.
   // In that case current float point operation results in a NaN (not a number) that propagates on further expressions.
   double sqrt_term {sqrt(b*b - 4*a*c)};
   double x1 {(-b + sqrt_term) / (2 * a)};
   double x2 {(-b - sqrt_term) / (2 * a)};
   std::cout << "The solutions for the quadratic equation " << a << "x²";
   if (b != 0) {
    if (b > 0) std::cout << " + " << b << "x";
	else std::cout << " - " << -b << "x";
   }
   if (c != 0) {
   if (c > 0) std::cout << " + " << c;
   else std::cout << " - " << -c;
   }

   std::cout << " = 0, are: x = " << x1 << " and x = " << x2 << '\n';
 }
 }
