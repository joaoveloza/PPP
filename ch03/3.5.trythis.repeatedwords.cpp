#include <string>
#include <iostream>

int main() {
 std::string previous = " ";
 std::string current;
 int count = 0;
 while (std::cin >> current) {
  if (previous == current) {
    std::cout << "repeated word: " << current << '\n';
	count++;
    std::cout << "Total repeated words: " << count << '\n';
	}
  previous = current;
 }
}
