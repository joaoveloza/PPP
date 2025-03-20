#include <iostream>

 int main() {
 int first {1};
 int last {100};
 int guess {0};
 int question {0};

 std::cout << "Please, think of a number between " << first << " and " << last << ". I'll going to guess...\n";

 char answer {' '};

 while (first != last) {
  if ((last - first) == 1) guess = last;
  else guess = (first + last) / 2;

  if (question%2 == 0) {
   std::cout << "Is your number less than " << guess << "? (y/n)\n";
   std::cin >> answer;
   if (answer == 'y') {
    last = guess - 1;
	++question;
   }
   else if (answer == 'n') {
    first = guess;
	++question;
   }
   else 
   std::cout << "Sorry, I don't understand your answer. Again ...\n";
  }
  else {
   std::cout << "Is your number more than " << guess << "? (y/n)\n";

   std::cin >> answer;
   if (answer == 'y') {
    first = guess + 1;
	++question;
   }
   else if (answer == 'n') {
    last = guess;
	++question;
   }
   else
    std::cout << "Sorry, I don't understand your answer. Again...\n";
  }
 }
 std::cout << "Your number is: " << first << ".\n";
 std::cout << "I only needed " << question << " questions to guess.\n";
 return 0;
}
