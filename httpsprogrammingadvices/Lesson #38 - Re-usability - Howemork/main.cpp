#include <iostream>
#include <string>

using namespace std;

struct strInfo
{
string FirstName;
string LastName;
int Age;
string strCity;
string strCountry;
float strMonthlySalary;
char strGender;
bool strMarried;
};

void ReadInfo(strInfo &Info)
{
cout << "Please enter your FirstName?\n";
  cin>> Info.FirstName;
cout << "Please enter your LastName?\n";
  cin>> Info.LastName;
cout << "Please enter your Age?\n";
  cin>> Info.Age;
cout << "Please enter your City?\n";
  cin>> Info.strCity;
cout << "Please enter your Country?\n";
  cin>> Info.strCountry;
cout << "Please enter your Monthly Salary?\n";
  cin>> Info.strMonthlySalary;
cout << "Please enter your Gender?\n";
  cin>> Info.strGender;
cout << "Please enter your Married?\n";
  cin>> Info.strMarried;
}

void PrintInfo(strInfo Info)
{
 cout << "\n*******************************************\n";
  cout << "FirstName: " << Info.FirstName << endl;
  cout << "LastName: " << Info.LastName << endl;
  cout << "Age: " << Info.Age << endl;
cout << "City: " << Info.strCity << endl;
cout << "Country: " << Info.strCountry << endl;
cout << "Monthly Salary: " << Info.strMonthlySalary << endl;
cout << "yearly Salary: " << Info.strMonthlySalary * 12 << endl;
  cout << "Gender: " << Info.strGender << endl;
cout << "Married: " << Info.strMarried << endl;
  cout << "\n*******************************************\n";
}
int main() {
  strInfo Person1Info;
ReadInfo(Person1Info);
PrintInfo(Person1Info);
}