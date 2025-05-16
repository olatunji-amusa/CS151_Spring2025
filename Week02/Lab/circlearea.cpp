#include <iostream>
using namespace std;

const double PI = 3.14; // Pi constant
const double RADIUS = 5.4; // Given radius

int main() {
    // Define variables
    double area, circumference;

    // Compute area and circumference
    area = PI * RADIUS * RADIUS;
    circumference = 2 * PI * RADIUS;

    // Output results
    cout << "The circumference of the circle is: " << circumference << endl;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}