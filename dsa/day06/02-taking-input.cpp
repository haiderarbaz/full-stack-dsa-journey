#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){

/*
  1. cin - basic input
*/
// int age;
// cout << "Enter age: ";
// cin >> age;

// cout << "User age is: " << age << endl;

/*
  2. Taking multiple input
*/
// int a, b;
// cout << "Enter two numbers: ";
// cin >> a >> b;

// cout << "Addition of two numbetrs is: " << a + b << endl;

/* 
  3. Taking full line/sentences
*/
// string name;
// cout << "Enter your name: ";
// cin >> name;

// cout << "User name is: " << name << endl;
/*
  Problem with cin using for full line or sentences, it only read till the first space, remaining content stays in the input buffer (not lost) and can cause issues with subsequent reads.

  To solve this we use 'getline()'.
  getline() - reads entile line including spaces
*/
string fullName;
cout << "Enter your full name: ";
getline(cin, fullName);

cout << "Hello, " << fullName << endl;

/* 
  To get an correct output for this code comment all the above codes which are inside {} and uncomment this code and run
*/

/*
  Common problem we get while mixing 'cin' and getline()
*/
// int rollNo;
// string schoolName;

// cout << "Enter your rollNo: ";
// cin >> rollNo;

// cout << "Enter your school name: ";
// getline (cin, schoolName);

// cout << "Your rollNo " << rollNo << " and your school " << schoolName << " is registered with us";

/*
  Problem with the above code is " cin >> rollNo " will take the numner and leaves \n(new line) in buffer, and " getline(cin, schoolName) " reads reamining new line (\n) and name becomes emptly

  To overcomne this situation we can use " cin.ignore() " after " cin >> rollNo ", " cin.ignore() " will clear the leftover new line.
*/

int rollNo;
string schoolName;

cout << "Enter your rollNo: ";
cin >> rollNo;
cin.ignore();

cout << "Enter your school name: ";
getline (cin, schoolName);

cout << "Your rollNo " << rollNo << " and your school " << schoolName << " is registered with us";

/*
  Note:

    Run single code one by one so will get the exact result and you'll get a better uinderstanding 
*/
}