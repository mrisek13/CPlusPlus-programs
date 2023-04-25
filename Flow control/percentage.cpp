/*
Napiši program kako bi izračunali totalne troškove.
Količina i cijena se unose od strane korisnika.
Popust od 10% se izračunava za troškove veće od 2000.
*/
#include <iostream>
using namespace std;

int main()
{
    double kolicina, cijena;
    cout << "Unesite kolicinu: ";
    cin >> kolicina;
    cout << "Unesite cijenu: ";
    cin >> cijena;

    double ukupno = kolicina * cijena; // ukupni troškovi
    if (ukupno > 2000)
    {
        ukupno *= 0.9; // primijeni 10% popusta
    }

    cout << "Ukupni troskovi su: " << ukupno << endl;
    return 0;
}