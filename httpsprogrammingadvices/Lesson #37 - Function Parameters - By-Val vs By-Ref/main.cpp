#include <iostream>
#include <iostream>

using namespace std;
//void MyFunction(int &Num1)  refernce
void MyFunction(int &Num1)
{
  Num1 = 70010;
  cout << "Number inside function became= " << Num1 << endl;
  
}
int main() {
  int Num1;
  Num1 = 1000;
  MyFunction(Num1);
  
  cout << "Number after calling the function became= "<< Num1 << endl;
  cout << &Num1 << " refrens"<< endl;
}