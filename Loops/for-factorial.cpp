/*
Napišite program koji će naći faktorijel bilo kojeg upisanog broja.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, factorial = 1;
    cout << "Upiši broj: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    cout << "Faktorijel broja " << n << " je " << factorial << endl;
    return 0;
}