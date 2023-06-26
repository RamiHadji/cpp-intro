#include <iostream>
using namespace std;

int main() {
  string Name = "Mohammed";
  string City = "Amman";
  string Country = "Jordan";
  int Age = 44;
  float MonthlySalary = 5000;
  char Gender = 'M';
  bool isMarried = true;

  cout << "********************" << endl;
  cout << "Name: " << Name << endl;
  cout << "Age: " << Age << " years" << endl;
  cout << "City: " << City << endl;
  cout << "Country: " << Country << endl;
  cout << "Monthly Salary: " << MonthlySalary << endl;
  cout << "Yearly Salary: " << MonthlySalary * 12 << endl;
  cout << "Gender: " << Gender << endl;
  cout << "Married: " << boolalpha << isMarried << endl;
  cout << "********************" << endl;

  return 0;
}
