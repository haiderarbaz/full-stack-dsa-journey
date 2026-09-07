/*
  Your thinking for this problem should be:

  "Is A smaller than B?"

  If yes → A is the minimum.

  Then:

  "Is B larger than A?"

  If yes → B is the maximum.

  That's a relational comparison, so you need the appropriate relational operators.

  Think about what you actually need

  You need to handle both possible arrangements:

  Situation 1:
  A < B

  → A is minimum
  → B is maximum

  Situation 2:
  B < A

  → B is minimum
  → A is maximum

  Try to express the second situation in plain English:

  "If A is greater than B, then ______ is the minimum and ______ is the maximum."

  The important idea 🧠

  These two comparisons are equivalent:

  A < B

  and

  B > A

  Whenever one is true, the other is also true.

  Similarly:

  A > B

  and

  B < A

  are also equivalent.

  Think of it like this:

  6 < 36
  36 > 6

  They're two different ways of saying the same relationship.
*/

/*
  1st Way:
*/
#include <bits/stdc++.h>
using namespace std;

// int main() {
// 	// your code goes here
// 	int A, B;
//  cout << "Enter two number A & B: ";
// 	cin >> A >> B;
	
// 	if (A < B) 
// 	    cout << "Min = " << A << endl; 
// 	if (B > A) 
// 	    cout << "Max = " << B << endl;
// 	if (A > B) 
// 	    cout << "Min = " << B << endl; 
// 	if (B < A) 
// 	    cout << "Max = " << A << endl;

// }

/*
  2nd Way: recommended** optimized way
*/

int main() {
	// your code goes here
	int A, B;
 cout << "Enter two number A & B: ";
	cin >> A >> B;
	
	if (A < B) {
	    cout << "Min = " << A << endl; 
	    cout << "Max = " << B << endl;
	} else {
	    cout << "Min = " << B << endl; 
	    cout << "Max = " << A << endl;
	}

}

/*
  3rd Way: Not recommemded****
*/

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int A, B;
//   cout << "Enter two number A & B: ";
// 	cin >> A >> B;
	
// 	if (A < B) {
// 	    cout << "Min = " << A << endl; 
// 	    cout << "Max = " << B << endl;
// 	}else if (A == B) {
// 	    cout << "Min = " << B << endl;
// 	    cout << "Max = " << A << endl;
// 	} else {
// 	    cout << "Min = " << B << endl;
// 	    cout << "Max = " << A << endl;
// 	}

// }
