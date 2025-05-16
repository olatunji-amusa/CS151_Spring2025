#include <iostream>
using namespace std;

const double NORMAL_TEMP = 98.6; 

int main() {
    double celsius; 
    celsius = (NORMAL_TEMP - 32) * 5 / 9; 

    cout << "Normal body temperature in Celsius is: " << celsius << "°C" << endl;

    return 0;
}