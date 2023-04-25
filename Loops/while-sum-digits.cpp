/*
Napišite program koji će koji će izraditi sumu znamenki upisanog cijelog broja.
*/
#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Upiši cijeli broj: ";
    cin >> n;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "Suma znamenki je: " << sum << endl;
    return 0;
}