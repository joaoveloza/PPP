#include <PPP.h>

int area(int length, int width);

int main()
{
    // 18:20: error: expected ‘)’ before ‘;’ token
    int s1 = area(7;

    // 22:20: error: too few arguments to function ‘int area(int, int)’
    int s2 = area(7)

    // 24:5: error: ‘Int’ was not declared in this scope
    Int s3 = area(7);

    // 29:19: error: missing terminating ' character
    // 30:1: error: expected primary-expression before ‘}’ token
    int s4 = area('7);
}
