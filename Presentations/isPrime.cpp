#include <iostream>
#include "_functions.h"

using namespace std;

bool isPrime(int num);
using namespace Presentations; // <<<<<<<<<<<<<< HERE <<<<<<<<<<<<<<

int main()
{
    cout << isPrime(2) << endl;
    cout << isPrime(3) << endl;
    cout << isPrime(5) << endl;
    cout << isPrime(7) << endl;
    cout << isPrime(11) << endl;
    cout << isPrime(13) << endl;
    cout << isPrime(15) << endl;
    cout << isPrime(16) << endl;
    cout << isPrime(30) << endl;
    return 0;
}