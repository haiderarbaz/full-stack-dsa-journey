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

  The important idea

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


#include <bits/stdc++.h>
using namespace std;


/*
  1st attempt:
*/
// int main(){
//   int A, B;
//   cout << "Enter 2 numbners A & B: " << endl;
//   cin >> A >> B;
//   if(A << B){
//     cout << "Min = " << A << endl;
//   } if(B >> A) {
//     cout << "Max = " << B << endl;
//   }
// }
/*
  Mistakes i did in this attempt:

    i.) Using '>>' & '<<', these bit bshift operator not 'greater than' and 'less than' operator.
      >> - Right Shift
      << - Left Shift

    ii.) 'if' conditions is not checking what i intended.
    
    iii.) Was using 2 separate 'if' statements but conditions in both 'if' was similar/identical

  Solution:

    I wanted to determine which of 'A' & 'B' is 'smaller' and which is 'greater'.

    Thinking should be 
    is 'A' smaller than 'B'
      if yes 'A' is the 'minimum' & 'B' is the 'maximum'
    is 'B is smaller than 'A'
      if yes 'b' is the 'minimum' & 'A' is the 'maximum'

*/

/*
  2nd attempt:
*/
// int main(){
//   int A, B;
//   cout << "Enter 2 numbners A & B: " << endl;
//   cin >> A >> B;
//   if(A < B){
//     cout << "Min = " << A << endl;
//   } if(B > A) {
//     cout << "Max = " << B << endl;
//   }
// }
/*
  Mistakes i did in this attempt:

    i.) Was using agaiun 2 separate 'if' statements but conditions in both 'if' was similar/identical.
    
  This code was working for
  Case 1: 6 36 but not for Case 2: 36 6

  Case 1: 6 36
    first if:
      6  < 36 - yes - print - Min = 6;
    second if
      36 > 6 - yes - print - Max - 36;

  Case 2: 36 6
    first if
      36 > 6 - No - Nothing printed;
    second if
      6 > 36 - No - Nothing printed;

  I was assuming in the code that if the first condition is false, then second condition will automatically find the minimum/maximum.

  But second codtion(B > A) for case 2 is
    B > A - 6 > 36 - Obviously No

  The problem with my current logic is it only handles A < B not B < A.

  Solution:

    But to solve this problem both possible arrangements.
      i.) 'A' < 'B'
        'A' is 'Min'
        'B' is 'Max'
      
      ii.) 'B' < 'A'
        'B' is 'Min'
        'A' is 'Max'  

    I wanted to determine which of 'A' & 'B' is 'smaller' and which is 'greater'.

    Thinking should be 
    is 'A' smaller than 'B'
      if yes 'A' is the 'minimum' & 'B' is the 'maximum'
    is 'B is smaller than 'A'
      if yes 'b' is the 'minimum' & 'A' is the 'maximum'

*/

/* 
  3rd attempt;  
*/
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
  This code was working fine for both cases but 'A' < 'B' and 'B' > 'A' are actually doing the exact same thing, Likewise 'A' > B & 'B' < 'A'.

  It's not making the answer incorrect but its unnecessary.
*/

/*
  4th attempt: recommended** optimized way
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
  5th attempt: Not recommemded****
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
// 	    cout << "Min = " << A << endl;
// 	    cout << "Max = " << B << endl;
// 	} else {
// 	    cout << "Min = " << B << endl;
// 	    cout << "Max = " << A << endl;
// 	}

// }
/*
  5th attempt covers all three possible situations, but both 'if' and 'else-if' producing
    Min = A;
    Max = B;
  
    So although the code is correct but 'else-if' isn't actually necessary for this problem.
*/

/*
  Note: 
    if - else-if - else
      is useful when you have more than two possible arrangements.
*/