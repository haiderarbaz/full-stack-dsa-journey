#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout << "Enter a number n: ";
  cin >> n;
  int sum = 0; // will use this variable to store the variable and find the sum

  if(n == 0){
    cout << 0;
    
    return 0;
  }

  while (n != 0){
    int lastDigits = n % 10;
    sum = sum + lastDigits;
    n = n/10;
  }
  cout << "Sum is: " << sum << endl;

  return 0;
  
}