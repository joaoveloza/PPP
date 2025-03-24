#include "../PPP.h"

const vector<double> temps_test_ok {
	   -16.5, -23.2, -24.0, -25.7, -26.1, -18.6, -9.7, -2.4,
		7.5, 12.6, 23.8, 25.3, 28.0, 34.8, 36.7, 41.5,
		40.3, 42.6, 39.7, 35.4, 12.6, 6.5, -3.7, -14.3
};

// As book stated. a sample with all temperatures above 0 causes the program to give bad results
const vector<double> temps_test_bad {
 12.5, 23.5, 34.5, 45.6, 43.2, 32.1, 21.0
};

//With no data, and no checks at all, average calculation causes a divide by zero, and, since it's a double a NaN result.
const vector<double> temps_test_bad_min;

int main() {
 vector<double> temps;

 //for the test we substitute user input by predefined values
 // for(double temp<; cin >> temp; ) // read and put into temps
 // temps.push_back(temp);

 //change the container on the range for loop to get different results.
 for (double x: temps_test_bad)
  temps.push_back(x);

  double sum = 0;
  double high_temp = 0;
  double low_temp = 0;

  for (double x: temps) {
   if (x > high_temp) high_temp = x;
   if (x < low_temp) low_temp = x;
   sum += x;
  }
  
  cout << "High temperature: " << high_temp << '\n';
  cout << "Low temperature: " << low_temp << '\n';
  cout << "Average temperature: " << sum/temps.size() << '\n';
}
