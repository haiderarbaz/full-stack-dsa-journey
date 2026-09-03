#include <iostream>
using namespace std;

int main (){

  cout << 10 + 2 << endl; // 12
  cout << 10 - 2 << endl; // 8
  cout << 10 * 2 << endl; // 20
  cout << "10 + 2" << endl; // 10 + 2 (because anything inside double quotes is treated as text, not math)
  cout << "10 - 2" << endl;
  cout << "10 * 2" << endl;
  cout << "10 / 2" << endl;
  cout << "10 % 2" << endl;
  
  cout << 10 + 3 << endl; // 13
  cout << 10 - 3 << endl; // 7
  cout << 10 * 3 << endl; // 30
  cout << 10 / 3 << endl; // 3 (if we devide 2 integers the result wiull be always an integer)
  // * / * this will give quotient

  cout << 10 % 3 << endl; // 1
  // * % * this will give remainder, it's called modulo operator.

  // what if we wanted the result as 3.33
  cout << 10.0 / 3 << endl;
  cout << 10 / 3.0 << endl;
  // change one of the integers in float and you will get result as 3.33.
  
}