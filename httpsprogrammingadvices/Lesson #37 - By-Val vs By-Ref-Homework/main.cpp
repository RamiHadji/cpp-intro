#include <iostream>
#include <string>

using namespace std;
void Swap(int &A,int &B)
{
int temp;
  temp = A;
  A = B;
  B = temp;
  cout << "After Swap inside function A= "<< A << " " << "B= "<< B << endl;
}

int main() {
  int A, B;
  cout << "Please enter the n";
  cin >> A;
  cout << "Please enter the n";
  cin >> B;
      cout << "After swap: A = " << A << " "<< " B = " << B << endl;
Swap(A ,B);
  cout << "After Swap inside Main the function A= "<< A << " " << " B= "<< B << endl;
  return 0;
}