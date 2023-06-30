#include <iostream>
using namespace std;

struct SocialMedia {
    string IdFacebook;
    string IdTwitter;
    string IdLinkedin;
    string AdresMail;
};

struct StAddress {
    string Street1;
    string POBOX;
    string city;
    string Address;
    string codeZip;
};

struct Salary {
    double MonthlySalary;
    double YearlySalary;
};

struct AGender {
    string Gender;
    int MaritalStatus;
};

struct PersonInfo {
    string firstName;
    string lastName;
    int age;
    SocialMedia social;
    StAddress address;
    Salary salary;
    AGender gender;
};

int main() {
    PersonInfo MyPerson1, MyPerson2;
    cout << "Enter First Name: ";
    cin >> MyPerson1.firstName;

    cout << "Enter Last Name: ";
    cin >> MyPerson1.lastName;

    cout << "Enter Age: ";
    cin >> MyPerson1.age;

    cout << "Enter Facebook ID: ";
    cin >> MyPerson1.social.IdFacebook;

    cout << "Enter Twitter ID: ";
    cin >> MyPerson1.social.IdTwitter;

    cout << "Enter LinkedIn ID: ";
    cin >> MyPerson1.social.IdLinkedin;

    cout << "Enter Email Address: ";
    cin >> MyPerson1.social.AdresMail;

    cout << "Enter Street: ";
    cin >> MyPerson1.address.Street1;

    cout << "Enter PO Box: ";
    cin >> MyPerson1.address.POBOX;

    cout << "Enter City: ";
    cin >> MyPerson1.address.city;

    cout << "Enter Address: ";
    cin >> MyPerson1.address.Address;

    cout << "Enter Zip Code: ";
    cin >> MyPerson1.address.codeZip;

    cout << "Enter Monthly Salary: $";
    cin >> MyPerson1.salary.MonthlySalary;

    MyPerson1.salary.YearlySalary = MyPerson1.salary.MonthlySalary * 12;

    cout << "Enter Gender (M or F): ";
    cin >> MyPerson1.gender.Gender;

    cout << "Enter Marital Status (1 - Single, 2 - Married, 3 - Divorced): ";
    cin >> MyPerson1.gender.MaritalStatus;

    // Access and print MyPerson1's information
    cout << "First Name: " << MyPerson1.firstName << endl;
    cout << "Last Name: " << MyPerson1.lastName << endl;
    cout << "Age: " << MyPerson1.age << endl;
    cout << "Facebook ID: " << MyPerson1.social.IdFacebook << endl;
    cout << "Twitter ID: " << MyPerson1.social.IdTwitter << endl;
    cout << "LinkedIn ID: " << MyPerson1.social.IdLinkedin << endl;
    cout << "Email Address: " << MyPerson1.social.AdresMail << endl;
    cout << "Street: " << MyPerson1.address.Street1 << endl;
    cout << "PO Box: " << MyPerson1.address.POBOX << endl;
    cout << "City: " << MyPerson1.address.city << endl;
    cout << "Address: " << MyPerson1.address.Address << endl;
    cout << "Zip Code: " << MyPerson1.address.codeZip << endl;

  cout << "Monthly Salary: $" << MyPerson1.salary.MonthlySalary << endl;
return 0;
}
