#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int reversedNum = 0;

  if(n == 0){

    cout << 0;

    return 0;

  }

  while(n != 0){

    reversedNum = (reversedNum * 10) + n % 10;
    n = n/10;
  }
  cout << "Reverse is: " << reversedNum << endl;

}
/*
  Note:
      We initialize reversedNum with 0;
        ↓
      Each time we multiply reversedNum by 10 to shift its existing left diugits by one positions.
        ↓
      Then add the newly extracted digits to the units position.
        ↓
      Therefor reversedNum gradually builds and stores the reversed number.
*/