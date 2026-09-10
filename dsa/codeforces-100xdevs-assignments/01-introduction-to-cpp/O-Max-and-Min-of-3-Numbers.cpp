#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int A, B, C;
  cout << "Enter 3 numbers: " << endl;
	cin >> A >> B >> C;
	
	if(A <= B && A <= C){
	    cout << "Min = " << A << endl;
	    if (B >= C){
	        cout << "Max = " << B << endl;
	    } else {
	        cout << "Max = " << C << endl;
	    }
	} else if( B <= C ){
	    cout << "Min = " << B << endl;
	    if (A >= C){
	        cout << "Max = " << A << endl;
	    } else {
	        cout << "Max = " << C << endl;
	    }
	} else {
	    cout << "Min = " << C << endl;
	    if (A >= B){
	        cout << "Max = " << A << endl;
	    } else {
	        cout << "Max = " << B << endl;
	    }
	}
}
