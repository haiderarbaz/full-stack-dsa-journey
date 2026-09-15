#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long N;
  cout << "Enter a number: ";
	cin >> N;
	
	long long sum = 0;
	
	if(N == 0){
	    cout << 0;
	    
	    return 0;
	}
	
	while(N != 0){
	    sum = sum + (N % 10);
	    N = N /10;
	}
	cout << "Sum of Digits is: " << sum << endl;
	

}