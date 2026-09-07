#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int M, N, a, b, finalResult;
    cout << "Enter 2 integers: " << endl;
    cin >> N >> M;
    
    a = (N%10);
    b = (M%10);
    
    finalResult = a + b;
    
    cout << finalResult << endl;
}