#include <bits/stdc++.h>
using namespace std;

int main(){
  int length, breadth;

  cout << "Enter length & breadth of a rectangle: ";
  cin >> length >> breadth;

  int area = length * breadth;
  int perimeter = 2 * (length + breadth);

  cout << "Area is: " << area << endl;
  cout << "Perimeter is: " << perimeter << endl;
}