// Lesson #45 - Switch-Case Statement- Howmwerk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enSecreenColor{Red = 1, Blue = 2, Green = 3, Yello = 4};
int main()
{
	cout << "\n************************\n";
	cout << "Please Chose the number of your color?\n";
	cout << "(1) Red\n";
	cout << "(2) Blue\n";
	cout << "(3) Green\n";
	cout << "(4) Yello\n";
	cout << "\n************************\n\n";
	cout << "Your Chose is : ";
	int C;
	enSecreenColor Color;

	cin >> C;
	Color = (enSecreenColor)C;

	switch (Color) {
	case enSecreenColor::Red:
			 system("Color 4F");
			 break;
		case enSecreenColor::Blue:
			 system("Color 1F");
			 break;
	
		case enSecreenColor::Green:
			system("Color 2F");		
			break;
		case enSecreenColor::Yello:
			 system("Color 4F");
		  	break;
			default:
				system("Color 4F");
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
