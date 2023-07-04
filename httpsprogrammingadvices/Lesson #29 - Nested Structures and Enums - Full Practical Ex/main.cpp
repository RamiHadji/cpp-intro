#include <iostream>
using namespace std;

enum enColor {Red, Green, Yello, Blue};
enum enGendor {Male, Female};
enum enMaritalStatus {Single, Married};
struct stAddress 
{
   string StreetName;
   string BuildingNo;
   string POBox;
   string ZipCode;
};
struct stContactInfo
{
    string Phone;
    string Email;
    stAddress Address;
};
struct stPerson
{
   string FirstName;
   string LastName;
   stContactInfo ContactInfo;

    enMaritalStatus MaritalStatues;
    enGendor Gendor;
    enColor FavourateColor;
};


int main() {

  stPerson Person1;

  Person1.FirstName = "Mohammed";
  Person1.LastName = "Fola";

  Person1.ContactInfo.Email = "xyz@xyz.com";
  Person1.ContactInfo.Phone = "+9610000009";
  Person1.ContactInfo.Address.POBox = "7777";
  Person1.ContactInfo.Address.ZipCode = "11194";
  Person1.ContactInfo.Address.StreetName = "Queen1 Street";
  Person1.ContactInfo.Address.BuildingNo = "333";

  Person1.Gendor = enGendor::Male;
  Person1.MaritalStatues = enMaritalStatus::Married;
  Person1.FavourateColor = enColor::Green;
  
cout << Person1.FirstName << endl;
cout << Person1.LastName  << endl; 
cout << Person1.ContactInfo.Address.StreetName << endl;  
  
  return 0;
}