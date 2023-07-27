#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Press any character, press 'Esc' to exit." << endl;
    
    do {
        ch = cin.get();
        cout << "You pressed character: " << ch << " with ASCII code: " << int(ch) << endl;
    } while (ch != 27); // 27 is the ASCII code for 'Esc' key

    return 0;
}
