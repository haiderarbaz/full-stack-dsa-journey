#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout << "Enter a number n: ";
  cin >> n;

  int temp = n;

  int reversedNum = 0;

  if (n == 0){

    cout << 0;

    return 0;

  }

  while(n != 0){
    reversedNum = (reversedNum * 10) + n % 10;
    n = n/10;
  }

  if (reversedNum == temp){
    cout << "Palindrome" << endl;
  } else {
    cout << "Not Palindrome" << endl;
  }
}