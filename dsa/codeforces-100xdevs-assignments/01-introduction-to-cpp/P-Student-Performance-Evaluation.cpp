#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int marks;
    cout << "Enter your marks: " << endl;
    cin >> marks;
    
    if (marks > 90){
        cout << "Excellent" << endl;
    } else if (marks > 80 && marks <= 90){
        cout << "Good" << endl;
    } else if (marks > 70 && marks <= 80){
        cout << "Fair" << endl;
    }else if (marks > 60 && marks <= 70){
        cout << "Meets Expectations" << endl;
    }else {
        cout << "Below Par" << endl;
    }
}
