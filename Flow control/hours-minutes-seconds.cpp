/*
U programu omogućite unos broja sekundi i ispišite odgovarajuće vrijeme u satima, minutama i sekundama.
(Primjerice za unos 1856 sekundi dobivamo ispis 00:30:56)
*/

#include <iostream>
using namespace std;

int main()
{

    int brojSekundi, sati, minute, sekunde;
    cout << "Unesite broj sekundi: ";
    cin >> brojSekundi;

    sati = brojSekundi / 3600;          // broj sati
    minute = (brojSekundi % 3600) / 60; // broj minuta
    sekunde = brojSekundi % 60;         // broj sekundi

    cout << sati << ":" << minute << ":" << sekunde << endl;
    return 0;
}