#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int X, Y;
  cout << "Enter a coordinates: " << endl;
	cin >> X >> Y;
	
	if (X == 0 and Y == 0){
	    cout << "Origin" << endl;
	} else if (Y == 0 and X != 0){
	    cout << "X axis" << endl;
	} else if (X == 0 and Y != 0){
	    cout << "Y axis" << endl;
	} else if (X > 0 and Y > 0){
	    cout << "1st Quadrant" << endl;
	} else if(X < 0 and Y > 0) {
	    cout << "2nd Quadrant" << endl;
	} else if(X < 0 and Y < 0){
	    cout << "3rd Quadrant" << endl;
	} else{
	    cout << "4th Quadrant" << endl;
	}

}