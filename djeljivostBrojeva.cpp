/*
napiši c++ program  koji provjerava da li je kvadrat učitanog dvoznamenkastog prirodnog broja djeljiv sa sumom njegovih znamenki, te u skladu s time ispisuje odgovarajuću poruku
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int broj, suma_znamenki;
    bool djeljiv;

    cout << "Unesite dvoznamenkasti prirodni broj: ";
    cin >> broj;

    if (broj >= 10 && broj <= 99) {
        // izračunaj sumu znamenki
        suma_znamenki = (broj / 10) + (broj % 10);
        // provjeri da li je kvadrat broja djeljiv sa sumom znamenki
        djeljiv = pow(broj, 2) % suma_znamenki == 0;

        if (djeljiv) {
            cout << "Kvadrat broja " << broj << " je djeljiv sa sumom njegovih znamenki." << endl;
        } else {
            cout << "Kvadrat broja " << broj << " nije djeljiv sa sumom njegovih znamenki." << endl;
        }
    } else {
        cout << "Pogrešan unos! Uneseni broj nije dvoznamenkasti prirodni broj." << endl;
    }

    return 0;
}


/*
U ovom programu koristimo jednu varijablu za pohranjivanje učitanog broja te tri varijable za računanje sume znamenki, provjeru djeljivosti i za ispis poruke ovisno o rezultatu provjere.

Nakon što se učita broj, provjeravamo da li je dvoznamenkasti prirodni broj. Ako nije, ispisujemo poruku o pogrešnom unosu. U suprotnom, izračunavamo sumu znamenki i provjeravamo da li je kvadrat broja djeljiv s tom sumom. Nakon provjere, ispisujemo odgovarajuću poruku.
*/