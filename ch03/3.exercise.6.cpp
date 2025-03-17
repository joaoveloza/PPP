#include <iostream>

int main() {
 std::cout << "Enter three integer values: " << '\n';
 int val1 {0};
 int val2 {0};
 int val3 {0};
 std::cin >> val1 >> val2 >> val3;
 
 int min {0};
 int mid {0};
 int max {0};

 if (val1 < val2) {
  if (val1 < val3) {
    min = val1;
	if (val2 < val3) {
	  mid = val2;
	  max = val3;
	}
	else {
	  mid = val3;
	  max = val2;
	}

  }
  else {
   min = val3;
   mid = val1;
   max = val2;
  }
  }
  else { // val1 > val2
   if (val1 > val3) {
    max = val1;
	if (val2 > val3) {
	 mid = val2;
	 min = val3;
   }
   else {
     mid = val3;
	 min = val2;
   }
  } 
  else {
   min = val2;
   mid = val1;
   max = val3;
  }

}
std::cout << min << ", " << mid << ", " << max << '\n';
}
