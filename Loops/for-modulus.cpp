/*
Napišite program koji traži najveći zajednički djelitelj 2 upisana broja.
Najveći zajednički djelitelj dva ili više brojeva je najveći broj s kojim su svi zadani brojevi djeljivi.
Primjer: Najveći zajednički djelitelj brojeva 20 i 18 je 2 Kraće pišemo D(18,20)=2
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, NZD;
    cout << "Upiši dva broja: ";
    cin >> a >> b;
    for (int i = 1; i <= a && i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0)
        {
            NZD = i;
        }
    }
    cout << "Najveći zajednički djelitelj brojeva " << a << " i " << b << " je " << NZD << "." << endl;
    return 0;
}