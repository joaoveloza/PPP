#include <iostream>

int main() {
 std::cout << "Enter three string values: " << '\n';
 std::string val1 {" "};
 std::string val2 {" "};
 std::string val3 {" "};
 std::cin >> val1 >> val2 >> val3;
 
 std::string min {" "};
 std::string mid {" "};
 std::string max {" "};

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
