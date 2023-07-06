// Lesson #45 - Switch-Case Statement-Coutnry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enCountryChoice { Jordan = 4, Tunisa = 6, Algeria = 1, Oman = 5, Egypt = 2, Iraq = 3, Other = 7 };

int main()
{
    cout << "****************************\n";
    cout << "Please Enter the number of your country?\n";
    cout << "(1) Algeria\n";
    cout << "(2) Egypt\n";
    cout << "(3) Iraq\n";
    cout << "(4) Jordan\n";
    cout << "(5) Oman\n";
    cout << "(6) Tunisa\n";
    cout << "(7) Other\n";
    cout << "****************************\n\n";
    cout << "Your Choice? ";

    int c;
    enCountryChoice Coutnry;

    cin >> c;
    Coutnry = (enCountryChoice)c;
    switch (Coutnry)
    {
    case enCountryChoice::Algeria:
        cout << "Your country is Algeria\n";
        break;
    case enCountryChoice::Egypt:
        cout << "Your country is Egypt\n";
        break;
    case enCountryChoice::Iraq:
        cout << "Your country is Iraq\n";
        break;

    case enCountryChoice::Jordan:
        cout << "Your country is Jordan\n";
        break;
    case enCountryChoice::Oman:
        cout << "Your country is Oman\n";
        break;
    case enCountryChoice::Tunisa:
        cout << "Your country is Tunisa\n";
        break;
    case enCountryChoice::Other:
        cout << "Your country is Other\n";
        break;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
