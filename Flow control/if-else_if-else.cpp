/*
Korisnik unosi slovni znak.
Potrebno je odrediti da li je uneseno veliko slovo, malo slovo, brojka ili specijalni simbol.
Za rješenje zadatka koristite ASCII tablicu.
*/

#include <iostream>
using namespace std;

int main()
{
    char znak;
    cout << "Unesite slovni znak, brojku ili specijalni simbol: ";
    cin >> znak;

    if (znak >= 'A' && znak <= 'Z')
    {
        cout << "Uneseno je veliko slovo." << endl;
    }
    else if (znak >= 'a' && znak <= 'z')
    {
        cout << "Uneseno je malo slovo." << endl;
    }
    else if (znak >= '0' && znak <= '9')
    {
        cout << "Unesena je brojka." << endl;
    }
    else
    {
        cout << "Unesen je specijalni simbol." << endl;
    }

    return 0;
}