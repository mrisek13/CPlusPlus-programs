/*
Napišite program koji će provjeriti da li je uneseni broj prosti broj.
Prosti brojevi ili prim-brojevi su svi prirodni brojevi djeljivi bez ostatka samo s brojem 1 i sami sa sobom, a strogo veći od broja 1.
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    bool isPrime = true;
    cout << "Upiši broj: ";
    cin >> n;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << n << " je prosti broj." << endl;
    else
        cout << n << " nije prosti broj." << endl;
    return 0;
}