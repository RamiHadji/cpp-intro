#include <iostream>
#include <string>

using namespace std;
int x = 400;

void MyFunction1()
{
  int x = 500;
  cout << "The value of x insed function is : " << x << endl;
}

int main() {
  int x = 10;
  cout << "The local value of x inside Main is : "<< x << endl;
  MyFunction1();
    cout << "the global value of x inside Main is:" << ::x << endl;
  return 0;
}