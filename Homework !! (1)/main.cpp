#include <iostream>
using namespace std;

int main() {
  cout << "Allowed and denied variable labels:" << endl << endl;
  cout << "Age = Yes" << endl;
  cout << "My-Age = No" << endl;
  cout << "My_Age = Yes" << endl;
  cout << "_Age = No" << endl;
  cout << "2x = No" << endl;
  cout << "X2 = Yes" << endl;
  cout << "My Name = No" << endl;
  cout << "MyName = Yes" << endl;
  cout << "#Name = No" << endl;
  cout << "N@me = No" << endl;
  cout << "int = No" << endl;
  cout << "float = No" << endl;

  return 0;
}
