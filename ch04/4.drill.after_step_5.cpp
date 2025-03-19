#include <iostream>
#include <vector>
#include <algorithm>

constexpr double CM_M_CONV_RATIO {0.01};
constexpr double IN_M_CONV_RATIO {2.54*CM_M_CONV_RATIO};
constexpr double FT_M_CONV_RATIO {12.0*IN_M_CONV_RATIO};
const std::vector<std::string> legal_units {"cm", "m", "in", "ft"};

double min(double a, double b) {
 if (a > b)
  return b;
 else
  return a;
}

double max(double a, double b) {
 if (a > b)
  return a;
 else
  return b;
}


void print_legal_units() {
  std::cout << "\tm for meters\n" << "\tcm for centimeters\n" << "\tin for inches\n" << "\tft for feet\n";
}

bool is_legal_unit(std::string unit) {
  bool is_legal {false};
  for (std::string legal_unit: legal_units) {
    if (unit == legal_unit)
      is_legal = true;
  }
  return is_legal;
}

double convert_to_mts(double amount, std::string units) {
  double mts {0.0};
  
  if (units == "ft")
  mts = amount*FT_M_CONV_RATIO;
  else if (units == "in")
  mts = amount*IN_M_CONV_RATIO;
  else if (units == "cm")
  mts = amount*CM_M_CONV_RATIO;
  else
  mts = amount;

  return mts;
}

bool comp(double a, double b) {
  return a < b;
}

int main() {
 std::cout << "Insert an amount followed by an unit string. Valid units are:\n";
 print_legal_units();

 double val {0.0};
 double min {0.0};
 double max {0.0};
 double mts {0.0};
 int count  {0};
 double sum {0.0};
 std::vector<double> values;
 std::string unit {" "};
 std::cout.precision(15);

 while (std::cin >> val >> unit) {
   if (is_legal_unit(unit)) {
     mts = convert_to_mts(val, unit);
     if (count == 0) {
      std::cout << val << unit << " (" << mts << "m) "
      << " is the first number, the smallest and largest so far.\n";
      min = mts;
      max = mts;
     }
     else if (min > mts) {
      min = mts;
    std::cout << "The smallest so far.\n";
     }
     else if (max < mts) {
     max = mts;
     std::cout << "The largest so far.\n";
     }
   count++;
   sum += mts;
   values.push_back(mts);
   }
   else {
    std::cout << unit << " is an ilegal unit in this program. Please use:\n";
    print_legal_units();
   }
}

std::cout << "Smallest value: " << min << " meters\n";
std::cout << "Largest value: " << max << " meters\n";
std::cout << "Number of values: " << count << '\n';
std::cout << "Sum of values: " << sum << " meters\n";

std::cout << "Sorted list of values:\n";
sort(values.begin(), values.end(), comp);
for (double value: values)
   std::cout << '\t' << value << " meters\n";

 return 0;
}
