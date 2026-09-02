/*
  Relationale Operators: 

    Relational operators are used to compare two values and determine the relationship between them. Result of relational operators is always either true (1) or false (0).

    - Return boolean-like results (0 or 1).
    - Used in decision-making statements.

    Relational operators are:
      > → greater than
      < → less than
      >= → greater than or equal to
      <= → less than or equal to
      == → equal to
      != → not equal to

    NOTE:
      Everything 'non-zero' is 'truthy', while 'zero' is 'falsy' in C++ conditional expressions.

*/

#include <iostream>
using namespace std;

int main(){
  int a = 5;
  int b = 10;

  cout << (a > b) << endl;
  cout << (a < b) << endl;
  cout << (a >= b) << endl;
  cout << (a <= b) << endl;
  cout << (a == b) << endl;
  cout << (a != b) << endl;

  bool c = -4444;
  cout << c << endl;

  bool d = 435456;
  cout << d << endl;

  bool e = 'A';
  cout << e << endl;

  bool f = 0;
  cout << f << endl;

}

/*
  = VS ==

  = → is Assignment opearator
  a = 5 (means put 5 into a) 
  = → stores/assigns the value from the right-hand side to the variable on the left-hand side.

  where as 

  == → Is Equal To, It Checks if both operands are equal
  x == 10 // Check: Is x equal to 10?

*/