#include <iostream>

using namespace std;

struct StAddress
{
      string Street1;
      string POBOX;
};

struct stOwner
{
      string FullName;
      string Phone;
      StAddress Address;
};
struct Car
{
      string Brand;
      string Model;
      int Year; 
      stOwner Owner;
};
int main() {
  Car MyCar1, MyCar2;
  
  MyCar1.Brand = "BMW";
  MyCar1.Model = "X5";
  MyCar1.Year = 2003;
  MyCar1.Owner.FullName = "mohammed";
  MyCar1.Owner.Phone = "065432112345";
  MyCar1.Owner.Address.POBOX;

  MyCar2.Brand = "FORD";
  MyCar2.Model = "Moustang";
  MyCar2.Year = 2022;
  
  cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year<< " " << endl;
  cout << MyCar2.Brand << " " << MyCar2.Model << " " << MyCar2.Year<< " " << endl;
  cout << MyCar1.Owner.FullName << endl;
  cout << MyCar1.Owner.Phone << endl;
return 0;
}