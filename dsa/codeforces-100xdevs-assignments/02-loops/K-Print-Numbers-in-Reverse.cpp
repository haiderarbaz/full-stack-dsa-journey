#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n;
  cout << "Enter a number: ";
	cin >> n;
	if (n == 0){
	    cout << 0;
	    
	    return 0;
	}
	
	while(n != 0){
        cout << n % 10;
        n = n/10;
	}

}