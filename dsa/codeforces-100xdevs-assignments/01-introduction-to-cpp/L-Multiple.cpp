#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N, M;
    cout << "Enter 2 numbers N & M: ";
    cin >> N >> M;
    
    if (M%N == 0)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}

/*
  A number M is said to be a multiple of N if M is divisible by N.
*/