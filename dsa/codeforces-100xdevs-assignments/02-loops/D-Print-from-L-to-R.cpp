#include <iostream>
using namespace std;

int main(){
  int L, R;
  cout << "Enter a starting number L & ending number R: ";
  cin >> L >> R;

  int i = L;

  while(i <= R){
    cout << i << " ";
    i++;
  }
}