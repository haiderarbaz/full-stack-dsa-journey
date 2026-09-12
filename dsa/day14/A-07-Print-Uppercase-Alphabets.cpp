#include <iostream>
using namespace std;

int main(){
  char ch = 'A';

  while(ch <= 'Z'){
    cout << ch << endl;
    ch++;
  }
}

/*
  Note:
    The important point is that a char variable stores a character, but internally that character has a numeric ASCII value.

    for uppercase english letters:
      A - 65
      B - 66
      C - 67
      D - 68
      ....
      ....
      Z - 90
      [ - 91

    so when you increase a char, you're basically moving to the next ASCII value, and c++ interprets that value as the corresponding character.

    ASCII value '66' diplayed as 'A'.

    ch++ increases the ASCII value by 1.
    65 --> 66
*/