#include <iostream>

using namespace std;

enum Color { Red, Green, Yellow, Blue};
enum Direction { North, South, East, West};

enum Week { Sat, Sun, Mon, Tue, Wed, Thr, Fri};
enum Gendor { Male, Female};
enum Status { Single, Married};
int main() {
  Color MyyColor;
  Direction MyDirection;
  Week Today;
  Status MyStatus;
  
  MyyColor = Color::Yellow;
  MyDirection = Direction::North;
  Today = Week::Sun;
  MyStatus = Status::Single;
  
  cout << "Color is : " << MyyColor << endl;
  
}