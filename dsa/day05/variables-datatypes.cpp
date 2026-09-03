#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int age = 34.75; 
  float money = 1000.00;
  double totalCharges = 599.99;
  char ch = '#';
  bool b = true;  
  cout << age << endl;
  cout << money << endl;
  cout << totalCharges << endl;
  cout << ch << endl;
  cout << b << endl;

  /*
  Note:-
    1. If you're declaring a variable name with 'int' data type you should intialize with it a whole number; incase if you assign it with a decimal number then the result will truncat the decimal part and will only show whole number (will not rounding the number)

      int age = 34.75; (This compiles but Output will be 34 (decimal part truncated, not rounded!)

    2. Charactyers must be intialize in '' single quotes ( 'A' ); if you initialize it in "" double quotes ( "A" ) it will throw an error: invalid conversion from ‘const char*’ to ‘char’ [-fpermissive]

      Why this happens:

        Single quotes ' ' → Creates a char (single character, 1 byte)
        Double quotes " " → Creates a const char* (C-style string, array of characters)
  */

}