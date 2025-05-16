/*
Complete the following program skeleton so it displays the volume of a
cylindrical fuel tank. The formula for the volume of a cylinder is
Volume = π(r^2)h
where
π is 3.14159,
r is the radius of the tank, and
h is the height of the tank.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double volume, radius, height;
    const double PI = 3.14159;

    cout << "This program will tell you the volume of\n";
    cout << "a cylinder-shaped fuel tank.\n";
    cout << "How tall is the tank? ";
    cin >> height;
    cout << "What is the radius of the tank? ";
    cin >> radius;

    volume = PI * pow(radius, 2) * height;

    cout << "The volume of the fuel tank is: " << volume << " cubic units." << endl;

    return 0;
}