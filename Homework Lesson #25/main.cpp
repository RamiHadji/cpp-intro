// Boolean Expressions

#include <iostream>
using namespace std;

int main() {
  // Define a bool variable named Res.
  bool Res;

  // Evaluate the expression `12 >= 12` and assign the result to Res.
  Res = (12 >= 12);
  cout << "12 >= 12: " << Res << endl;

  // Evaluate the expression `12 > 7` and assign the result to Res.
  Res = (12 > 7);
  cout << "12 > 7: " << Res << endl;

  // Evaluate the expression `8 < 6` and assign the result to Res.
  Res = (8 < 6);
  cout << "8 < 6: " << Res << endl;

  // Evaluate the expression `8 == 8` and assign the result to Res.
  Res = (8 == 8);
  cout << "8 == 8: " << Res << endl;

  // Evaluate the expression `12 <= 12` and assign the result to Res.
  Res = (12 <= 12);
  cout << "12 <= 12: " << Res << endl;

  // Evaluate the expression `7 == 5` and assign the result to Res.
  Res = (7 == 5);
  cout << "7 == 5: " << Res << endl;

  // Evaluate the expression `!(12 >= 12)` and assign the result to Res.
  Res = !(12 >= 12);
  cout << "!(12 >= 12): " << Res << endl;

  // Evaluate the expression `!(12 < 7)` and assign the result to Res.
  Res = !(12 < 7);
  cout << "!(12 < 7): " << Res << endl;

  // Evaluate the expression `!(8 < 6)` and assign the result to Res.
  Res = !(8 < 6);
  cout << "!(8 < 6): " << Res << endl;

  // Evaluate the expression `!(8 == 8)` and assign the result to Res.
  Res = !(8 == 8);
  cout << "!(8 == 8): " << Res << endl;

  // Evaluate the expression `!(12 <= 12)` and assign the result to Res.
  Res = !(12 <= 12);
  cout << "!(12 <= 12): " << Res << endl;

  // Evaluate the expression `!(7 == 5)` and assign the result to Res.
  Res = !(7 == 5);
  cout << "!(7 == 5): " << Res << endl;

  // Evaluate the expression `1 && 1` and assign the result to Res.
  Res = (1 && 1);
  cout << "1 && 1: " << Res << endl;

  // Evaluate the expression `1 && 0` and assign the result to Res.
  Res = (1 && 0);
  cout << "1 && 0: " << Res << endl;

  // Evaluate the expression `0 || 1` and assign the result to Res.
  Res = (0 || 1);
  cout << "0 || 1: " << Res << endl;

  // Evaluate the expression `0 || 0` and assign the result to Res.
  Res = (0 || 0);
  cout << "0 || 0: " << Res << endl;

  // Evaluate the expression `!( 0 )` and assign the result to Res.
  Res = !(0);
  cout << "!( 0 ): " << Res << endl;

  // Evaluate the expression `!(1 || 0)` and assign the result to Res.
  Res = !(1 || 0);
  cout << "!(1 || 0): " << Res << endl;

  // Evaluate the expression `(7 == 7) && (7 > 7)`
  Res = (7 == 7) && (7 > 7);
  cout << "(7 == 7) && (7 > 7): " << Res << endl;

    return 0;
}
