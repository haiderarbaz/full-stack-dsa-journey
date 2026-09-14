#include <bits/stdc++.h>
using namespace std;

int main (){
  int n;
  cout << "Enter a number n: ";
  cin >> n;

  if (n == 0){
    
    cout << 0;
    
    return 0;
  }

  while (n != 0){
    cout << n % 10;
    n = n/10;
  }
}

/* 

  Concepts to be remember:

  'while(n != 0)':
      we use '(n != 0)' because in reevrese a number algorithm, 'n' is being reduced deigits by digits.
      we contiunue the loop as long as n has digits remaining.
      when 'n' becomes 'zero' all digits have been produced so the loop will stop executing.

  why not 'while(n > 0)':
      For a positive 'n > 0' would also work.
      but 'n != 0' directly expresses the algorithm's idea:
        continue untill 'n' becomes zero.

  The below pattern are very common when processing the digits of an integer:
      'n % 10' = gives/gets last digits of the number
      'n / 10' = remove the last digits of a number
      'n != 0' = repeat untill 'n' becomes 'zero' or you can say repeat until all digits are removed

  Note:
      'while(n != 0)':
        we are not checking whether original number is non-zero, we're checking whether there are still digits left to process. 

*/