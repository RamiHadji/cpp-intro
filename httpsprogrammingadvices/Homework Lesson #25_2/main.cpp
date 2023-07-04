// Boolean Expressions

#include <iostream>
using namespace std;

int main() {
  // Define a bool variable named Result.
  bool Result;

  // Evaluate the expression `5 < 6 && 7==7` and assign the result to Result.
  Result = (5 < 6 && 7 == 7);
  cout << "5 < 6 && 7==7: " << Result << endl;

  // Evaluate the expression `(1 || 0)` and assign the result to Result.
  Result = (1 || 0);
  cout << "(1 || 0): " << Result << endl;

  // Evaluate the expression `!(5 < 6 &&  7==7)` and assign the result to Result.
  Result = !(5 < 6 && 7 == 7);
  cout << "!(5 < 6 &&  7==7): " << Result << endl;

  // Evaluate the expression `!(5 > 6 &&  7==7)` and assign the result to Result.
  Result = !(5 > 6 && 7 == 7);
  cout << "!(5 > 6 &&  7==7): " << Result << endl;

  // Evaluate the expression `!(5 > 6 &&  7==7) || !(1 || 0)` and assign the result to Result.
  Result = !(5 > 6 && 7 == 7) || !(1 || 0);
  cout << "!(5 > 6 &&  7==7) || !(1 || 0): " << Result << endl;

  // Evaluate the expression `((5 > 6 &&  7==7) || (8 > 1 && 4 <= 3)) && 1` and assign the result to Result.
  Result = ((5 > 6 && 7 == 7) || (8 > 1 && 4 <= 3)) && 1;
  cout << "((5 > 6 &&  7==7) || (8 > 1 && 4 <= 3)) && 1: " << Result << endl;

  // Evaluate the expression `((5 > 6 && !(7==7))  && (8 > 1 ||  4 <= 3)) || 1` and assign the result to Result.
  Result = ((5 > 6 && !(7 == 7)) && (8 > 1 || 4 <= 3)) || 1;
  cout << "((5 > 6 && !(7==7))  && (8 > 1 ||  4 <= 3)) || 1: " << Result << endl;

  return 0;
}
