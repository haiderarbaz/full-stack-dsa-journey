#include <bits/stdc++.h>
using namespace std;

/*
  1st attempt:
*/
// int main(){
//   int n;
//   cout << "Enter a number n: ";
//   cin >> n;

//   int counter = 0;

//   if (n == 0){

//    cout << 0;
    
//     return 0;
//   }

//   while (n != 0){

//     n = n % 10;
//     counter ++;
//     n = n/10;

//   }
//   cout << "Number of digits is: " << counter << endl;
  
// }
/*
  The above program will not give correct output:

    Suppose, n = 12345;
          ↓
        n % 10 = 5;
          ↓
        As we know 'n % 10' always gives/gets last digits of a number/integer.
          ↓
        so now, n = 5;
          ↓
        we have replaced the entire number 'n = 12345' with its last digits '5';
          ↓
        then,
          n = n / 10 operation will start executing,
          now n = 5;
          5 / 10 will be 0
          so, n becomes 0
          loops will stop executing

        so for 12345
          counter is 1 instead of 5;
        
        Here the mistake is 
          n % 10;
          we're not just gettin g the last digit, we're storing the last diogit back into n destroying the original number.
    Fix:
      To fix it we can take a temp variable for as of now.
*/

/* 
  2nd attempt:
*/
// int main(){
//   int n;
//   cout << "Enter a nmumber n: ";
//   cin >> n;

//   int counter = 0;

//   if (n == 0){

//     cout << 0;
    
//     return 0;
//   }

//   while ( n != 0){
//     int temp;

//     temp = n % 10;
//     n = n/10;
//     counter++;
//   }

//   cout << "Number of digits is: " << counter << endl;
// } 
/*
  This work because we use a variable a separate variable temp;
    for, n = 12345, we will get the last digit temp = 5;
        ↓
    but 'n' is still '12345'
        ↓
    then, n = n/10, makes 'n' to '1234'
        ↓
    so, the next iteration can continue.
*/

/*
  But in strict competitive programming platforms can show compiler warning/error: unused variable 'temp';

  temp is actually used here because we assign a value to it.
    temp = a % 10;

  but we nerver read/use the value afterward.

  so a coompiler may give an warning.
  but generally it's a warning not error.

  But as we know we prefer best practices in programming, so it's not a best practice so solved this way.

  we can totally avoid 'n % 10' operation.
*/

/*
  3rd attempt:
*/
int main(){
  int n;
  cout << "Enter a number n: ";
  cin >> n;

  int counter = 0;

  while(n != 0){
    n = n/10;
    counter++;
  }
  cout << "Number of digits is: " << counter << endl;
}