//The following program will not compile because the lines have been mixed up:
#include <iostream>
#include <iomanip>  // Required for stream manipulators
using namespace std;

int main() {
    // A) Display 34.789 in a field of 9 spaces with 2 decimal places
    cout << setw(9) << fixed << setprecision(2) << 34.789 << endl;

    // B) Display 7.0 in a field of 5 spaces with 3 decimal places
    cout << setw(5) << fixed << setprecision(3) << 7.0 << endl;

    // C) Display 5.789e+12 in fixed-point notation
    cout << fixed << 5.789e+12 << endl;

    // D) Display 67 left-justified in a field of 7 spaces
    cout << left << setw(7) << 67 << endl;

    return 0;
}

/*
When the lines are properly arranged, the program should display the following:

      Wolfgang Smith
Wolfgang Smith

Rearrange the lines in the correct order. Test the program by entering it on the
computer, compiling it, and running it.
*/
