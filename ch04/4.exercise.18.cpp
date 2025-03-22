#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> names;

bool name_already_exists(std::string name) {
   for (size_t i = 0; i < names.size(); i++) {
    if (name == names[i]) return true;
   }

   return false;
}

int main() {
 std::vector<int> scores;
 std::string name {""};
 int score {-1};

 std::cout << "Enter name pair values: ";

 while (true) {
  std::cin >> name;
  std::cin >> score;
  if (name == "NoName" && score == 0) break;
  if(name_already_exists(name)) {
  std::cout << "Sorry, can't insert duplicate names." << '\n';
  exit(1);
  }
  names.push_back(name);
  scores.push_back(score);
 }

 std::cout << "Enter the name you want to know the score: ";
 std::string search_name {""};
 bool found {false};
 
 while (true) {
 std::cin >> search_name;
 if (search_name == "|") exit(0);
 found = false;
 for (size_t i = 0; i < names.size(); i++) {
  if (search_name == names[i]) {
   std::cout << search_name << " has " << scores[i] << " points.\n";
   found = true;
  }
 }
 if (!found) std::cout << "Name not found.\n";
 }

 for (size_t i = 0; i < names.size(); i++) 
  std::cout << names[i] << " " << scores[i] << '\n';
}
