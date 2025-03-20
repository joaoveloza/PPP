#include <iostream>
#include <vector>

int main() {
 std::vector<double> distances;

 std::cout << "Please, insert distances between neighboring cities along a route:\n";

 for (double distance; std::cin >> distance; )
  distances.push_back(distance);

  if (distances.size() == 0) {
   std::cout << "No distances inserted!";
  }

  double min {distances[0]};
  double max {distances[0]};
  double total {0};

  for (double d : distances) {
   if (d < min) min = d;
   if (d > max) max = d;
   total += d;
  }
  std::cout << "Total route distance: " << total << '\n';
  std::cout << "Smallest distance between two neighboring cities: " << min << '\n';
  std::cout << "Greatest distance between two neighboring cities: " << max << '\n';
  std::cout << "The mean distance between neighboring cities  is " << total/distances.size() << '\n';
}
