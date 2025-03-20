#include <iostream>
#include <vector>

const std::vector<std::string> names {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int get_number(std::string name) {
    int result {-1};
    for (size_t i = 0; i < names.size(); i++)
       if (names[i] == name) result = i;

       return result;
}

int main() {
  int number {0};
  std::string name {""};
  bool quit {false};

  std::cout << "Insert a one digit number to get it's name.\n"
            << "Insert a cipher name to get the number.\n"
            << "(Insert | to quit)\n";

  while (!quit) {
    if (std::cin >> number) {
        if (number < 0 || number > 10) 
            std::cout << "One-digit number only...\n";
        else
        std::cout << names[number] << '\n';
    }
    else {
        std::cin.clear();
        std::cin >> name;
        if (name == "|")
        quit = true;
        else {
            int n = get_number(name);
            if (n == -1)
            std::cout << "Not a decimal cipher name, I guess. Try again.\n";
            else
            std::cout << get_number(name) << '\n';
        }
    }
  }

  return 0;
}