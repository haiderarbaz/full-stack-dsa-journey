#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N, F;
    cout << "Entyer 2 numbers N & F: ";
    cin >> N >> F;
    
    if (N%F == 0)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}

/*
  A number F is said to be a factor of N if N is divisible by F.
*/