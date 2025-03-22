#include <iostream>
#include <vector>

void sieve_of_eratosthenes(int n) {
 std::vector<bool> prime(n, true);

 for (int p = 2; p * p <= n; p++) {
  if (prime[p] == true) {
    for (int i = p * p; i <= n; i += p) {
	 prime[i] = false;
	}
  }
 }

 for (int i = 2; i <= prime.size(); i++) {
   if (prime[i])
      std::cout << i << '\n';
 }
}

int main() {
 int n = 101;
 sieve_of_eratosthenes(n);
 return 0;
}
