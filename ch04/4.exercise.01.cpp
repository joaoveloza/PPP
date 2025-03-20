#include <iostream>

int main() {
 std::cout << "Insert a string: ";
 std::string word {" "};
 std::cin >> word;
 std::cout << "Letter\t" << "Integral\n";
 for (int i = 0; i < word.length(); i++) {
   std::cout << word[i] << "\t" << int(word[i]) << "\n";
 }
}
