/*
Učenik je dobio 5 ocjena. Konačnu ocjenu će dobiti prema sljedećim pravilima:
Postotak iznad ili jednak 60 % - Izvrstan
Postotak između 50 i 59% – Vrlo dobar
Postotak između 40 i 49% - Dobar
Postotak ispod 40% – Ne zadovoljava
*/

#include <iostream>
using namespace std;

int main()
{
    int ocjena1, ocjena2, ocjena3, ocjena4, ocjena5;
    cout << "Unesite pet ocjena: ";
    cin >> ocjena1 >> ocjena2 >> ocjena3 >> ocjena4 >> ocjena5;

    double prosjek = (ocjena1 + ocjena2 + ocjena3 + ocjena4 + ocjena5) / 5.0;
    double postotak = prosjek * 20;

    if (postotak >= 60)
    {
        cout << "Izvrstan" << endl;
    }
    else if (postotak >= 50)
    {
        cout << "Vrlo dobar" << endl;
    }
    else if (postotak >= 40)
    {
        cout << "Dobar" << endl;
    }
    else
    {
        cout << "Ne zadovoljava" << endl;
    }

    return 0;
}