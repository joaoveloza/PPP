#include "../PPP.h"

class Token {
 public:
   char kind;
   double value;
   Token(char ch):kind{ch}, value{0}{}
   Token(char ch, double val):kind{ch}, value{val}{}
};

//-------------------------------------------------------------------------

Token get_token() {
 char ch;
 cin >> ch;

 switch (ch) {
  case '(': case ')': case '+': case '-': case '*': case '/':
   return Token{ch};  // let each character represent itself.
  case '.':
  case '0': case '1': case '2': case '3': case '4': case '5':
  case '6': case '7': case '8': case '9':
     {
	  cin.putback(ch); // put digit back into the input stream
	  double val;
	  cin >> val;      // read a floating point number
	  return Token{'8', val};
	 }
  default:
    error("Bad token");
 }
};

//--------------------------------------------------------------------------

double expression();  // read and evaluate a Expression

//--------------------------------------------------------------------------

double term();        // read and evaluate a term

//--------------------------------------------------------------------------

double primary() {    // read and evaluate a Primary
 Token t {get_token};
 switch (t.kind) {
 case '(': // handle '(' expression ')'
  {
    double d = expression();
	t = get_token();
	if (t.kind != ')') error("')' expected");
	return d;
  }
  case '8':        // we use '8' to represent a number
   return t.value; // return the number's value
  default:
   error("primary expected");
 }
};

int main() {
 try {
  while (cin)
    cout << expression() << '\n';
 }
 catch (exception& e) {
  cerr << e.what() << endl;
  return 1;
 }
 catch (...) {
  cerr << "exception \n";
  return 2;
 }
};

//---------------------------------------------------------------------------------

double expression() {
 double left {term()};   // read and evaluate a Term
 Token t {get_token()};  // get the next token
 while (true) {
  switch (t.kind) {
   case '+':
     left += term();     // evaluate term and add
	   t {get_token};
	 break;
   case '-':
     left -= term();     // evaluate term and subtract
	 t = get_token();
	 break;
   default:
     return left;        // finally: no more + or -: return the answer
  }
 }
};

//---------------------------------------------------------------------------------

double term() {
 double left {primary()};   
 Token t {get_token()};   // get the next token

 while (true) {
  switch (t.kind) {
   case '*':
     left *= primary();
	 t {get_token()};
	 break;
   case '/':
	 double d {primary()};
	 if (d == 0) error("divide by zero");
	 left /= d;
	 t {get_token()};
	 break;
   default:
	  return left;
  }
 }
};
