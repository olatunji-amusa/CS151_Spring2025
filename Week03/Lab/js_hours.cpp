/*
Write a program that asks the user for the duration in minutes.
Display hours and minutes of the duration.
3 integer variable for hours, minutes, and duration
Use / and %
*/

#include <iostream>
using namespace std;

int main() {
    int duration, hours, minutes;

    cout << "Please enter the duration in minutes: ";
    cin >> duration;

    if (duration < 0) {
        cout << "Invalid input! Please enter a positive number of minutes." << endl;
        return 1;
    }

    hours = duration / 60;
    minutes = duration % 60;

    cout << "The duration is: " << hours << " hour" << (hours == 1 ? "" : "s")
         << " and " << minutes << " minute" << (minutes == 1 ? "" : "s") << "." << endl;

    return 0;
}