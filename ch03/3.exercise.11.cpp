#include <iostream>

int main() {
 std::cout << "How many pennies do you have?\n";
 int pennies {0};
 std::cin >> pennies;
 if (pennies != 0) {
 if (pennies > 1)
   std::cout << "You have " << pennies << " pennies.\n";
 else
    std::cout << "You have " << pennies << " pennie.\n";
}

 std::cout << "How many nickels do you have?\n";
 int nickels {0};
 std::cin >> nickels;
 if (nickels != 0) {
 if (nickels > 1)
  std::cout << "You have " << nickels << " nickels.\n";
 else 
   std::cout << "You have " << nickels << " nickel.\n";
}

 std::cout << "How many dimes do you have?\n";
 int dimmes {0};
 std::cin >> dimmes;
 if (dimmes != 0) {
 if (dimmes > 1)
  std::cout << "You have " << dimmes << " dimmes.\n";
 else
   std::cout << "You have " << dimmes << " dimme.\n";
}

 std::cout << "How many quarters do you have?\n";
 int quarters {0};
 std::cin >> quarters;
 if (quarters != 0) {
 if (quarters > 1)
  std::cout << "You have " << quarters << " quarters.\n";
 else
  std::cout << "You have " << quarters << " quarter.\n";  
}

 std::cout << "How many half dollars do you have?\n";
 int half_dollars {0};
 std::cin >> half_dollars;
 if (half_dollars != 0) {
 if (half_dollars > 1)
  std::cout << "You have " << half_dollars << " half dollars.\n";
 else
  std::cout << "You have " << half_dollars << " half dollar.\n";
}

 std::cout << "How many dollars do you have?\n";
 int dollars {0};
 std::cin >> dollars;
 if (dollars != 0) {
 if (dollars > 1)
  std::cout << "You have " << dollars << " dollars.\n";
 else
  std::cout << "You have " << dollars << " dollar.\n";
  }

  int total {pennies*1 + nickels*5 + dimmes*10 + quarters*25 + half_dollars*50 + dollars*100};
 
  std::cout << "The value of all of your coins is $" << (total / 100.0) << ".\n";
  return 0;
}
