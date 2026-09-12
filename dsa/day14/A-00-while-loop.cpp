/*
  while loop - useful when repetition depends mainly on a condition.

        Syntax:
          initialization;
          while (condition){
          
            // Code to be executed repeatedly

            update;
            }

          Initialization: Sets a counter variable. It runs only once at the beginning.

          Condition: Evaluated before every iteration. If true, the loop body runs. If false, the loop stops.

          Update: Increments or decrements the counter variable after the loop body executes.

          Note: If the condition is false right at the start, the code inside the loop will never execute.
          
    Remember this flow:
      - Initialization
      - check condition
      - if true - execute body
      - update
      - go back to condition
      - if false - exit loop

      Example: 
        Print numbers from 1 to 5
          i = 1;
          i <= 5; --> yes
          print i;
          i++;
          check i<=5 again

          repeat this utlil you reach the certain condition.

*/

/* 
  Problem: 1
    Print numbers from 1 to 100
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
  int i = 1;
  while (i <= 100){
    cout << i << endl;
    i++;  
  }
}
