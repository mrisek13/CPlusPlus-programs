/*
Napišite program koji će preokrenuti znamenke bilo kojeg upisanog broja.
Primjerice upisan je 5623, ispisuje se 3265.
*/
#include <iostream>

using namespace std;

int main()
{
    int n, reversed = 0;
    cout << "Upiši broj: ";
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    cout << "Preokrenuti broj je: " << reversed << endl;
    return 0;
}