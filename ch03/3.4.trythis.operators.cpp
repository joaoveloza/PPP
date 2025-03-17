#include <iostream>
#include <cmath>
#include <locale>

int main() {
 std::cout << "Please enter an integer value:";
 int n = 0;
 std::cin >> n;
 double dn = n;
 std::cout.imbue(std::locale(""));
 std::cout << "n == " << n
           << "\nn+1 == " << n+1
		   << "\nthree times n == " << 3*n
		   << "\ntwice n == " << n+n
		   << "\nn squared == " << n*n
		   << "\nhalf of n == " << n/2
		   << "\nsquare root of n == " << sqrt(dn)
		   << "\nmodulo 10 of n == " << n%10
		   << std::boolalpha << "\nn is greater than 10 == " << (n>10)
		   << '\n';
}
