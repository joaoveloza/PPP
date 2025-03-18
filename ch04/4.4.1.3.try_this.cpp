#include <iostream>

int main() {
   constexpr double yen_dollar_rate {0.00964};
   constexpr double kroner_dollar_rate {0.12295};
   constexpr double pound_dollar_rate {1.22721};
   constexpr double yuan_dollar_rate {0.14858};

   double amount {0};

   char currency {' '};

   std::cout << "Please enter an amount of money followed by a currency\n"
   "Currencies supported:\ny for Japanese Yen\nk for Norwegian Kroner\np for British Pound\n";

   while (std::cin >> amount >> currency) {
    switch (currency) {
	case 'y':
	  std::cout << amount << " Japanese yen(s) equals to " << amount*yen_dollar_rate << " US Dollar(s)\n";
	break;
	case 'k':
	  std::cout << amount << " Norwegian Kroner(s) equals to "
	  << amount*kroner_dollar_rate << " US Dollar(s)\n";
	break;  
	case 'p':
	  std::cout << amount << " British Pound(s) equals to " << amount*pound_dollar_rate << " US Dollar(s)\n";
	break;  
	case 'u':
	  std::cout << amount << " Chinese Yuan(s) equals to " << amount*yuan_dollar_rate << " US Dollar(s)\n";
	break;
	default:
	  std::cout << "Sorry! Currency indicated by " << currency << " is not supported.\n";
	break;  
   }
   return 0;
}
}
