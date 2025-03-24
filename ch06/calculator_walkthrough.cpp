#include "../PPP.h"

class Token {
    public:
    char kind;
    double value;
    Token(char k): kind{k}, value {0.0}{}
    Token(char k, double v): kind{k}, value{v}{}
};

int main() {
    cout << "Please enter expression(We can handle +, -, *, and /)\n:";
    cout << "add an x to end expression (e.g., 1+2*3x):";
    int lval = 0;
    int rval = 0;
    cin >> lval;               // read left most operand
    if (!cin)
       error("no first operand");

    for (char op; cin >> op;) {
       if (op != 'x')
           cin >> rval;
       if (!cin)
          error("no second operand");

       switch (op)
       {
       case '+':
        lval += rval;
        break;
       case '-':
        lval -= rval;
        break;
       case '*':
       lval *= rval;
       case '/':
       lval /= rval;
       break;
       default:
         cout << "Result: " << lval << '\n'; // not another operator: print result
         return 0;
        break;
       }
    }
    error("Bad expression");
}

Token get_token();  // function to read a token from cin

vector<Token> tok;

int main() {
    while (cin) {
        Token t = get_token();
        tok.push_back(t);
    }
}

// a simple expression grammar:
// Expression:
// Term
// Expression "+" Term    // addition
// Expression "-" Term    // subtraction
// Term:
// Primary
// Term "*" Primary       // multiplication
// Term "/" Primary       // division
// Term "%" Primary       // remainder (modulo)
// Primary:
//  Number
//  "("Expression")"      // grouping
// Number:
//  floating-point-literal
