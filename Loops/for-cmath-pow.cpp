/*
Napišite program koji unosi 2 broja x i y. Potrebno je izračunati exponent xy
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, result;
    cout << "Unesi x: ";
    cin >> x;
    cout << "Unesi y: ";
    cin >> y;
    result = pow(x, y);
    cout << x << "^" << y << " = " << result << endl;
    return 0;
}