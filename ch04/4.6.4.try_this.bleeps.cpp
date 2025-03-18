#include <iostream>
#include <vector>

int main() {
 const std::vector<std::string> dislikes {"Broccoli", "Weed", "Funeral"};
 
 for (std::string word; std::cin >> word; ) {
  bool disliked {false};
    for (std::string dislike: dislikes) {
	  if (word == dislike)
	    disliked = true;
		}

	 if (disliked)
	   std::cout << "BLEEP!" << '\n';
	 else
	   std::cout << word << '\n';
 }
 return 0;
}
