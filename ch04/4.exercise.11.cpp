// Create a program to find all the prime numbers between 1 and 100. One way to
// do this is to write a function that will check if a number is prime (i.e.,
// see if the number can be divided by a prime number smaller than itself)
// using a vector of primes in order (so that if the vector is called primes,
// primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then write a loop that goes
// from 1 to 100, checks each number to see if it is a prime, and stores each
// prime found in a vector. Write another loop that lists the primes you found.
// You might check your result by comparing your vector of prime numbers with
// primes. Consider 2 the first prime.

// A prime number is a number that can only divide by itself and by one without remainders.

#include <iostream>
#include <vector>

std::vector<int> primes;

bool is_prime(int number) {
 for (int p = 0; p < primes.size(); p++) 
  if (number % primes[p] == 0) return false;
  
  return true;
}

int main() {
 primes.push_back(2); // the smallest prime
 for (size_t i = 3; i < 101; i++) 
    if (is_prime(i)) primes.push_back(i);
 
 std::cout << "Primes: ";
 for (int i = 0; i < primes.size(); i++)
   std::cout << primes[i] << '\n';
}
