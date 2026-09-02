/*
  Logical Operators:

    Logical opeartors are used to combine two or more conditions or constraints or reverse conditions.

    They return a boolean value either true(1) or false(0).

    There are 3 types of logical operators:
      1. Logical AND, &&
        Return true only if all the operands are true or non-zero.
      
      2. Logical OR, ||
        Return true if either one of the is truer or non-zero.
      
      3. Logical, NOT, !
        Returns true if the operand is false or zero.

    In Summary:

      && → AND → Both conditions true
      || → OR → At least one conditions true
      ! → NOT → Reverse true or false

    NOTE:
      Everything 'non-zero' is 'truthy', while 'zero' is 'falsy' in C++ conditional expressions.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
  int a = 6, b = 8;

  // AND Opeartor
  cout << "a and b is: " << (a and b) << endl;
  cout << "a && b is: " << (a && b) << endl;

  // OR Opeartor
  cout << "a or b is: " << (a or b) << endl;
  cout << "a || b is: " << (a || b) << endl;

  // NOT Opearot
  cout << "not a is: " << (not a) << endl;
  cout << "! a is: " << (!a) << endl;

  cout << "not b is: " << (not b) << endl;
  cout << "! b is: " << (!b) << endl;

}

/*
  NOTE: 
    In C++, we can use and, or, and not as alternative keywords for the logical operators &&, ||, and !. 
*/