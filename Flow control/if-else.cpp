/*
U program se unosi broj u rasponu od 1-12. Program provjerava unos.
Ukoliko je unos izvan raspona ispisuje se poruka o pogrešci.
U slučaju ispravnog unosa ispisuje se koji je to mjesec (siječanj, veljača…)
*/

#include <iostream>
using namespace std;

int main()
{

    int broj;

    cout << "Unesite broj u rasponu od 1-12: ";
    cin >> broj;
    if (broj > 12 || broj < 1)
        cout << "Doslo je do pogreske.";
    else
    {
        if (broj == 1)
            cout << "Sijecanj";
        if (broj == 2)
            cout << "Veljaca";
        if (broj == 3)
            cout << "Ozujak";
        if (broj == 4)
            cout << "Travanj";
        if (broj == 5)
            cout << "Svibanj";
        if (broj == 6)
            cout << "Lipanj";
        if (broj == 7)
            cout << "Srpanj";
        if (broj == 8)
            cout << "Kolovoz";
        if (broj == 9)
            cout << "Rujan";
        if (broj == 10)
            cout << "Listopad";
        if (broj == 11)
            cout << "Studeni";
        if (broj == 12)
            cout << "Prosinac";
    }

    return 0;
}