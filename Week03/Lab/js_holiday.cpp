/*
Today is Valentine's Day.
Write a program that displays
today's date and says Happy Valentine's Day.
The date should be in the format: MM/DD/YYYY
3 string variables for day, month, year
1 char variable for the delimiter
2 string variables for date and greeting
cout all values appropriately
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string day = "14";
    string year = "2025"; 
    string month = "02";
    char delimiter = '/';

    string date = month + delimiter + day + delimiter + year;
    string greeting = "Happy Valentine's Day!";

    cout << "Today's date: " << date << endl;
    cout << greeting << endl;

    return 0;

    
}