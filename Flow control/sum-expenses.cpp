/*
Izradi program za računanje mjesečnog računa za telefonske pozive prema broju poziva i sljedećim pravilima:
Minimalno 200 za do 100 poziva.
Plus 0.60 po pozivu za sljedećih 50 poziva.
Plus 0.50 po pozivu za sljedećih 50 poziva.
Plus 0.40 po pozivu za sve pozive iznad 200 poziva.
*/

#include <iostream>
using namespace std;

int main()
{
    int broj_poziva;
    double cijena;

    cout << "Unesite broj poziva: ";
    cin >> broj_poziva;

    if (broj_poziva <= 100)
    {
        cijena = 200;
    }
    else if (broj_poziva <= 150)
    {
        cijena = 200 + 0.6 * (broj_poziva - 100);
    }
    else if (broj_poziva <= 200)
    {
        cijena = 200 + 0.6 * 50 + 0.5 * (broj_poziva - 150);
    }
    else
    {
        cijena = 200 + 0.6 * 50 + 0.5 * 50 + 0.4 * (broj_poziva - 200);
    }

    cout << "Mjesecni racun za " << broj_poziva << " poziva iznosi " << cijena << " EUR." << endl;

    return 0;
}