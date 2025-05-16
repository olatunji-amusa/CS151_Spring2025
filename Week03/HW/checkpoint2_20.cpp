/*
Write a program that defines an integer variable named age and a float
variable named weight. Store your age and weight, as literals, in the variables.
The program should display these values on the screen in a manner similar to
the following:

My age is 26 and my weight is 180 pounds.


(Feel free to lie to the computer about your age and your weight—it’ll
never know!)
*/

#include <iostream>

int main() {
    int age = 24;
    float weight = 220.0;

    std::cout << "My age is" << age << " and my weight is " << weight << " pounds." << std::endl;

    return 0;
}
