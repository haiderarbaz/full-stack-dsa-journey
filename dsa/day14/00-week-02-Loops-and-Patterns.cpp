/* 
  Let's say you have to print numbers from 1 to 5.
*/
#include <iostream>
using namespace std;

// int main(){
//   cout << 1 << endl;
//   cout << 2 << endl;
//   cout << 3 << endl;
//   cout << 4 << endl;
//   cout << 5 << endl;
// }
/* 
  But what if you had to print numbers from 1 to 1000?

    Will you print it like the above then it will too much line of code and it will be hectic for you too.
    or
    Writing 1000 cout statements would take a lot of time, make the program unnecessarily long, and be difficult to manage.
    or
    Imagine writing 1000 cout statements one by one. It would be time-consuming and your program would become very long.
    
    That's where loops come into the picture.
*/

/*
  What is a loop?
    A loop means:
      Repeat an action again and again until a certain condition is met.

    Think of a loop like climbing stairs. You keep taking one step at a time until you reach the top. A loop keeps repeating the same instructions until its stopping condition becomes true.
*/

/*
  Types of loops:
    i.) while loop
    ii.) for loop
    iii.) do-while loop

    'while' loop & 'for' loop are more commonly used.
    where 'do-while' is used less frequently, but it is useful when the loop body must execute at least once.

      i.) while loop - useful when repetition depends mainly on a condition.

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
      
      ii.) for loop - useful when you know roughly how many times you want to repeat something.

        Syntax:
          for (initialization; condition; update) {

              // Code to be executed repeatedly

            }

          Initialization: Sets a counter variable. It runs only once at the beginning.

          Condition: Evaluated before every iteration. If true, the loop body runs. If false, the loop stops.

          Update: Increments or decrements the counter variable after the loop body executes.

      iii.) do-while loop - similar to while, but executes the task at least once.

        Syntax:
          do {

              // Code to be executed

          } while (condition); 

          Note: Do not forget the trailing semicolon (;) after the while condition, which is a required syntax rule.

          Note: Even if the condition is false initially, the loop body guarantees a minimum of one execution.
*/

/*
  Print numbers from 1 to 50.  
*/

int main(){
  int i = 1;
  while (i <= 50)
  {
    cout << i << endl;
    i++;
  }
  
}

/*
  Let's analyse above the code example:

    i - counter varaible;
    ++ - increment operator, or you can write i = i + 1; or i += 1;
    i++ - increment counter variabvle by 1.

    Without a loop, you'd have to tell the computer separately:
      print 1
      print 2
      print 3
      print 4
      print 5

    A loop lets you say:
      - Start at 1
      - do the task 
      - move to the next number
      - stop after 50.
*/

/* 
  Whenever you see a loop problem, THINK ABOUT these three questions:

    1. Where do I start?

      Example:
      Start counting from 1.

    2. When should I stop?

      Example:
      Stop when I reach 5.

    3. What changes after each repetition?

      Example:
      Increase the number by 1/2/3 or decrease the number by 1/2/3 

  So your thinking should be:
    - Start
    - Check
    - Do something
    - Change
    - Check again 
    - Repeat

    Example:
      Print numbers from 1 to 10.

      Think:

        Start = 1
        Stop = 10
        Change = +1
        Action = print the number

          So:

          1 - 2 - 3 - 4 - ... - 10 - STOP
*/