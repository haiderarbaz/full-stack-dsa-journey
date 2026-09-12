#include <iostream>
using namespace std;

int main(){
  char ch = 'a';

  while(ch <= 'z'){
    cout << ch << endl;
    ch++;
  }
}

/*
  Note:
    The important point is that a char variable stores a character, but internally that character has a numeric ASCII value.

    for lowercase english letters:
      a - 96
      b - 97
      c - 98
      d - 99
      ....
      ....
      z - 90
      { - 91

    so when you increase a char, you're basically moving to the next ASCII value, and c++ interprets that value as the corresponding character.

    ASCII value '96' diplayed as 'a'.

    ch++ increases the ASCII value by 1.
    96 --> 97

    ch = 'A'
    ASCII = 65

    ch++ 

    ASCII = 66
    ch = 'B'
*/