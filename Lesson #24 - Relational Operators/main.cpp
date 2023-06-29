#include <iostream>
using namespace std;

int main() {
  int A, B;

  cout << "Enter the first number A: ";
  cin >> A;

  cout << "Enter the second number B: ";
  cin >> B;

  bool isEqual = (A == B);
  bool isNotEqual = (A != B);
  bool isGreater = (A > B);
  bool isLess = (A < B);
  bool isGreaterOrEqual = (A >= B);
  bool isLessOrEqual = (A <= B);

  cout << "A == B: " << isEqual << endl;
  cout << "A != B: " << isNotEqual << endl;
  cout << "A > B: " << isGreater << endl;
  cout << "A < B: " << isLess << endl;
  cout << "A >= B: " << isGreaterOrEqual << endl;
  cout << "A <= B: " << isLessOrEqual << endl;

  return 0;
}
