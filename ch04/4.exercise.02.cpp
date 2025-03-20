#include <iostream>
#include <vector>
#include <algorithm>

bool comp(double a, double b) {
 return a < b;
}

int main() {
 std::vector<double> temps;
 for (double temp; std::cin >> temp; ) {
  temps.push_back(temp);
 }

 double sum {0};
 for (auto x: temps) sum += x;
 std::cout << "Average temperature: " << sum/temps.size() << '\n';

 sort(temps.begin(), temps.end(), comp);
 double median {0};
 int idx = temps.size()/2;
 if (temps.size()%2 == 0)
   median = (temps[idx-1]+temps[idx])/2;
 else
   median = temps[idx];

 std::cout << "Median temperature: " << median << '\n';  
}
