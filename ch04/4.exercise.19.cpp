#include <iostream>
#include <string>
#include <vector>
#include <limits>

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

	std::cout << "Enter the score: ";
	int find_score {0};
	bool found {false};

	while (true) {
		if(std::cin >> find_score) {

		found = false;
		for (size_t i = 0; i < scores.size(); i++) {
			if (find_score == scores[i]) {
				std::cout << names[i] << " has " << " hit that score.\n";
				found = true;
			}
		}
        
		if (!found) {
		std::cout << "Nobody hits that score.\n";
		}
      }
	  else {
	  std::cout << "Sorry, bad input.\n";
	  exit(1);
	  }
	}

	for (size_t i = 0; i < names.size(); i++) 
		std::cout << names[i] << " " << scores[i] << '\n';
}
