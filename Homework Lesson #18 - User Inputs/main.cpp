#include <iostream>
#include <string>
using namespace std;

int main() {
  char Gender;
  int Age;
  string Name, City, Country;
  float MonthlySalary, YearlySalary;
  bool isMarried;
  
  cout << "Please enter a Name: ";
  cin >> Name;
  
  cout << "Please enter an Age: ";
  cin >> Age;
  
  cout << "Please enter a City: ";
  cin >> City;
  
  cout << "Please enter a Country: ";
  cin >> Country;
  
  cout << "Please enter a Monthly Salary: ";
  cin >> MonthlySalary;
  
  YearlySalary = 12 * MonthlySalary;
  cout << "Yearly Salary: " << YearlySalary << endl;
  
  cout << "Please enter a Gender M/F: ";
  cin >> Gender;
  
  cout << "Please enter Marital Status (1 for married, 0 for not married): ";
  cin >> isMarried;
  
  cout << "*******************************" << endl;
  cout << "Name: " << Name << endl;
  cout << "Age: " << Age << endl;
  cout << "City: " << City << endl;
  cout << "Country: " << Country << endl;
  cout << "Monthly Salary: " << MonthlySalary << endl;
  cout << "Yearly Salary: " << YearlySalary << endl;
  cout << "Gender: " << Gender << endl;
  cout << "Marital Status: " << (isMarried ? "Married" : "Not married") << endl;
  cout << "*******************************" << endl;
  
  return 0;
}
