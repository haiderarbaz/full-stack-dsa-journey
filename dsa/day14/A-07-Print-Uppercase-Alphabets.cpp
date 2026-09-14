#include <iostream>
using namespace std;

/*
  First attempt
*/
int main(){
  char ch = 'A';

  while('A' <= 'Z'){
    cout << ch << " ";
    ch++;
  }
}
/*
  - The above code will causes a Time Limit Exceeded (TLE) error because it creates an infinite loop.
  - The issue lies in while loop condition: while ('A' <= 'Z').
  - Why this happens:
    - Constant values: Both 'A' and 'Z' are constant character literals.
    - Always true: The condition checks if the character 'A' (ASCII 65) is less than or equal to 'Z' (ASCII 90). 
    - Because 65 is always less than 90, this condition is always true and never changes.
    - Infinite execution: Since the condition never becomes false, the loop prints characters infinitely until the online judge cuts it off for taking too long.
    
  - How to fix it:
    - You need to check the variable 'ch' in your loop condition instead of the constant character 'A', and ensure the loop stops once 'ch' goes past 'Z'.
*/

/*
  Second attempt
*/
int main(){
  char ch = 'A';

  while(ch <= 'Z'){
    cout << ch << " ";
    ch++;
  }
}

/*
  Note:
    The important point is that a char variable stores a character, but internally that character has a numeric ASCII value.

    for uppercase english letters:
      A - 65
      B - 66
      C - 67
      D - 68
      ....
      ....
      Z - 90
      [ - 91

    so when you increase a char, you're basically moving to the next ASCII value, and c++ interprets that value as the corresponding character.

    ASCII value '66' diplayed as 'A'.

    ch++ increases the ASCII value by 1.
    65 --> 66
*/