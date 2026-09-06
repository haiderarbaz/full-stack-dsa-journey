/*
  if-else:
    Executes a block of code if a specified condition is true, or else executes another block if the condition is false.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){

  /*
    i.) If Statement 
      Executes code only if condition is true.

      for eg:
  */
  int age;
  cout << "Enter your age: ";
  cin >> age;
  if(age >= 18)
    cout << "Eligible to vote" << endl;

  /*
    ii.) if-else statement
      Two possible paths
  */
  if (age >= 18){
    cout << "Eligible to apply for VoterID." << endl;
  } else {
    cout << "Not Eligible to apply for VoterID." << endl;
  }

  /*
    iii.) if-else-if Statement 
      Multiple conditions
  */
  int marks = 75;
  if (marks >= 90) {
    cout << "Grade A" << endl;
  } else if(90 > marks >= 75){
    cout << "Grade B" << endl;
  } else if(75 > marks >= 60){
    cout << "Grade C" << endl;
  } else {
    cout << "Fail" << endl;
  }

  /*
    iv.) Nested if
  */
  bool hasVoterId = true;

  if (age >= 18){
    if(hasVoterId){
      cout << "Can Vote" << endl;
    } else {
      cout << "Need VoterId first" << endl;
    }
  } else {
    cout << "Not Eligible" << endl;
  }
 

}