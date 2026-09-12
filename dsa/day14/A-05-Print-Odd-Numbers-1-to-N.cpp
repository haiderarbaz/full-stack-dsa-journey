#include <bits/stdc++.h>
using namespace std;

/*
  First vway:
*/
// int main(){
//   int N;
//   cout << "Enter a number N: ";
//   cin >> N;

//   int i = 1;
//   while (i <= N)
//   {
//     if(i % 2 != 0){
//       cout << i << endl;
//     }
//     i++;
//   }
  
// }

/*
  Second way:
*/
int main(){
  int N;
  cout << "Enter a number N: ";
  cin >> N;

  int i = 1;
  while (i <= N){
    cout << i << endl;

    i += 2;
  }
}