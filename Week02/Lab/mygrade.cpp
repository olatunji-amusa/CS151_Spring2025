#include <iostream>
using namespace std;

int main() {
   
    int numberGrade = 95;
    char letterGrade;

    if (numberGrade >= 90)
        letterGrade = 'A';
    else if (numberGrade >= 80)
        letterGrade = 'B';
    else if (numberGrade >= 70)
        letterGrade = 'C';
    else if (numberGrade >= 60)
        letterGrade = 'D';
    else
        letterGrade = 'F';

    cout << "You received a number grade of " << numberGrade << ", which corresponds to a letter grade of " << letterGrade << "." << endl;

    return 0;
}