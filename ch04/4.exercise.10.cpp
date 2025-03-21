#include <iostream>

int v1 {1};
int v2 {2};

int fib() {
    int s = v1 + v2;
    if (s <= 0) s = 1;
    v1 = v2;
    v2 = s;
    return s;
}

void generate(int seed) {
    if (seed < 0) seed = -seed; // don´t want a negative number
    seed %= 10;                 //don't want a number larger than nine;
    if (seed == 0) return;     // don't bother use the default
    for (size_t i = 0; i < seed; i++) fib();          
}

int next_play(){
    return fib()%3; //we are only interested in a value 0, 1, or 2
}

int main() {
  std::cout << "Enter an integer \"seed\" so we can start the game: ";
  int seed = 0;
  std::cin >> seed;
  generate(seed);

  int player_wins {0};
  int computer_wins {0};
  int draws {0};

  std::cout << "Enter \"rock\", \"paper\", \"scissors\".\n" 
  << "I'll do the same.\n";

  std::string s {""};
  while (std::cin >> s) {
    int x {0};
    if (s == "scissors" || s == "s") {
         x = 0;
         s = "scissors";
    }
    else if (s == "rock" || s == "r") {
        x = 1;
        s = "rock";
    }
    else if (s == "paper" || s == "p") {
        x = 2;
        s = "paper";
    }
    else  
    exit(1);

    std::string ss {""};
    int xx {next_play()};
    switch (xx)
    {
    case 0:
        ss = "scissors";
        break;
    case 1:
        ss = "rock";
        break;
    case 2:
        ss = "paper";
        break;    
    default:
        break;
    }

    if (x == xx) {
        ++draws;
        std::cout << "A draw!" << '\n';
    }
    else {
        std::string res {"I win!"};
        if (xx == 0 && x == 1) {
            res = "You win!";
            ++player_wins;
        }
        else if (xx == 1 && x == 3) {
            res = "You win!";
            ++player_wins;
        }
        else if (xx == 2 && x == 0) {
            res = "You win";
            ++player_wins;
        }
        else
            ++computer_wins;

            std::cout << "You said \"" << s << "\" I said \"" << ss << "\": " << res << '\n';
            std::cout << "Score: you==" << player_wins << " me ==" << computer_wins << " same==" << draws << '\n';
    }
    std::cout << "Try again: ";
  }
  std::cout << "Exit because of bad input.\n";
}