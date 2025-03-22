#include <iostream>
#include <vector>

std::vector<int> primes;

bool is_prime(int number) {
	if (number == 2 || number == 3) return true;
    for (size_t i = 0; i < primes.size(); i++) {
	   if (number % primes[i] == 0) {
	     return false;
	   }
	}
	primes.push_back(number);
	return true;
}

int main(){
    primes.push_back(2);
	primes.push_back(3);
	std::cout << "How much primes you wanna know? ";
	int number {0};
	std::cin >> number;
	int count {2};

	while (number > 0) { 
		if (is_prime(count)) {
			number--;
			std::cout << count << '\n';
		}
		count++;
	}
}
