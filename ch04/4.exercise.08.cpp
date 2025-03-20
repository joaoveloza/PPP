#include <iostream>

const int minimum_reward {1000};
const int medium_reward {1000000};
const int max_reward {1000000000};

int main() {
 int total_grains {0};
 int current_grains {0};
 int accumulator {1};

 for (size_t i = 1; i < 65; i++) {
  current_grains += accumulator;
  accumulator *= 2;
  if (current_grains >= minimum_reward && total_grains < minimum_reward)
    std::cout << "There are required " << i << " squares to the inventor get the minimum reward (1000).\n";
if (current_grains >= medium_reward && total_grains < medium_reward)
    std::cout << "There are required " << i << " squares to the inventor get the minimum reward (1000000).\n";
if (current_grains >= max_reward && total_grains < max_reward)
    std::cout << "There are required " << i << " squares to the inventor get the minimum reward (1000000000).\n";
	total_grains = current_grains;
 }
}
