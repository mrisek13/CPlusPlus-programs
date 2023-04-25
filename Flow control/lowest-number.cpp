/*
Unose se godine Marka, Ivice i Petre.  Odredite iz unosa koji je najmlađi.
*/

#include <iostream>
using namespace std;

int main()
{
    int marko, ivica, petra;
    cout << "Unesite godine Marka: ";
    cin >> marko;
    cout << "Unesite godine Ivice: ";
    cin >> ivica;
    cout << "Unesite godine Petre: ";
    cin >> petra;

    int najmladji = marko;
    if (ivica < najmladji)
    {
        najmladji = ivica;
    }
    if (petra < najmladji)
    {
        najmladji = petra;
    }

    cout << "Najmladji ima " << najmladji << " godina." << endl;
    return 0;
}