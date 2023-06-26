#include <iostream>
using namespace std;

int main() {
  int MyAge = 45;
  int myNumber = 52;
  float myFloatNumber = 7.84;
  double myDoubleNumber = 21.89822;
  char myLetter = 'M';
  string myText = "Mohammed";
  bool myBoolean = true;

  char ch1 = 'A', ch2 = 'C', ch3 = 'B';
  cout << ch1 << ch2 << ch3 << " reversed is " << ch3 << ch2 << ch1 << endl;

  int x = 4;
  int y = 8;
  int sum = x + y;
  cout << "Sum of " << x << " and " << y << " is " << sum << endl;

  cout << "My Age is " << MyAge << " years old" << endl;
  cout << myNumber << endl;
  cout << myFloatNumber << endl;
  cout << myDoubleNumber << endl;
  cout << myLetter << endl;
  cout << myText << endl;
  cout << boolalpha << myBoolean << endl;

  return 0;
}
