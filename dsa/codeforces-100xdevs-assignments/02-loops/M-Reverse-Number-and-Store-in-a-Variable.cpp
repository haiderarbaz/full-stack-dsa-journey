#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long N;
	cout << "Enter a number: ";
	cin >> N;
	
	long long reversedNum = 0;
	
	if(N == 0){
	    cout << 0;
	    
	    return 0;
	}
	
	while(N != 0){
	    reversedNum = (reversedNum * 10) + (N % 10);
	    N = N /10;
	}
	cout << "Reversed Num is: " << reversedNum << endl;
	

}
