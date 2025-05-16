/*The following program will run, but the user will have difficulty understanding
what to do. How would you improve the program?*/

#include <iostream>
using namespace std;

int main() {
    double first, second, product;
    
    cout << "Enter the first number: ";
    cin >> first;
    
    cout << "Enter the second number: ";
    cin >> second;
    
    product = first * second;

    cout << "The product of " << first << " and " << second << " is " << product << "." << endl;
    
    return 0;
}