// Rewrite the following program. Use a switch statement instead of the if/else if statement.
#include <iostream>
using namespace std;

int main()
{
    int selection;
    cout << "Which formula do you want to see?\n\n";
    cout << "1. Area of a circle\n";
    cout << "2. Area of a rectangle\n";
    cout << "3. Area of a cylinder\n";
    cout << "4. None of them!\n";
    cin >> selection;
    if (selection == 1)
        cout << "Pi times radius squared\n";
    else if (selection == 2)
        cout << "Length times width\n";
    else if (selection == 3)
        cout << "Pi times radius squared times height\n";
    else if (selection == 4)
        cout << "Well okay then, good bye!\n";
    else
        cout << "Not good with numbers, eh?\n";
    return 0;
}