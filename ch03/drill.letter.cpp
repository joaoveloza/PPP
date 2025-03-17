#include <iostream>

int main() {
 std::cout << "Please enter your first name: ";
 std::string first_name;
 std::cin >> first_name;

 std::cout << "Hello " << first_name << '\n';

 std::cout << "Please enter the name of the person you want to write to: ";
 std::string friend_name;
 std::cin >> friend_name;

 std::cout << "Please enter the name of a friend: ";
 std::string friend_name2;
 std::cin >> friend_name2;

 std::cout << "\nPlease enter the age of the person you're writing: "; int age {0};
 std::cin >> age;
 if (age <= 0 || age > 110) {
  std::cerr << "You're kidding right\n";
  exit(1);
}


 std::cout << "\nDear " << friend_name << ", \n"
 << "\nHow are you? I am fine. I miss you.\n" 
 << "\nHave you seen " << friend_name2 << " lately?\n"
 << "\nI hear you just had a birthday and you are " << age << " years old.";
 if (age < 12) {
  std::cout << "\nNext year you will be " << age+1 << ".\n";
 }
  if (age == 17) {
  std::cout << "\nNext year you will be able to vote.\n";
 }
 if (age > 70) {
  std::cout << "\nAre you retired?\n";
 }

std::cout << "\n\nSincerely, "
          << "\n\n"
		  << "Johnny\n";

}
