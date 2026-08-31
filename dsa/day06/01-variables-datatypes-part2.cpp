/*

  Why Do We Need Data Types?

    Data types tell the compiler what kind of data a variable will hold, which is essential for several reasons:

*/

#include <iostream>
using namespace std;

/*

  1. Memory Allocation

    Different data types need different amounts of memory:
    Without data types, the compiler wouldn't know how much memory to reserve for each variable.

*/
int age = 25; // 4 bytes
char grade = 'A'; // 1 byte
double price = 99.99; // 8 bytes

/*

  2. Type Safety (Prevents Errors)
    
    Data types prevent you from accidentally mixing incompatible data:
    This catches mistakes before the program even runs.

*/

// int main(){

//   int age = "faizan ali";
//   char grade = 1000;

//   cout << age << endl;
//   cout << grade << endl;

// }
/* 

  The above program will throw an error and warning:

    cpp:34:13: error: invalid conversion from ‘const char*’ to ‘int’

    warning: overflow in conversion from ‘int’ to ‘char’

*/

/*

  3. Correct Operations

    Different data types behave differently with operators:

*/
int main(){
int a = 5, b = 2;
cout << a / b << endl;  // 2 (integer division)

double x = 5.0, y = 2.0;
cout << x / y << endl;;  // 2.5 (decimal division)
/* 

  The same operator (/) behaves differently based on data type!

*/

/*

  4. Data Interpretation

    The same bits in memory can mean different things depending on type:
    Same value, different interpretation based on type!


*/
int num = 65;
char letter = 65;

cout << num << endl;     // 65 (number)
cout << letter << endl;  // A (ASCII character)

/*

  5. Optimized Performance

    Knowing the exact type helps the compiler:

      - Allocate precise memory (no waste)
      - Choose efficient operations
      - Optimize code execution speed

*/
int counter = 0; // Compiler will reserve only 4 bytes for this operation

/*

  6. Range Limitations (Prevents Overflow)

    Each data type has a specific range:

      Type	  Range
      int	    -2,147,483,648 to 2,147,483,647
      char	  -128 to 127
      float	  ~7 decimal digits precision
      double	~15 decimal digits precision

*/
char smallNum = 200;
cout << smallNum << endl; // Overflow! Max is 127
/*

  Think of data types like containers:

    - Small box (char)    - holds 1 letter
    - Medium box (int)    - holds whole numbers
    - Large box (double)  - holds decimal numbers with high precision
    - Special box (bool)  - holds only true/false

*/

/*

  8. Code Readability & Maintenance

    Data types make code self-documenting:

*/

}