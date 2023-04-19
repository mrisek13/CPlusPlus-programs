/*
napiši c++ program  koji za zadani nenegativni cijeli broj odredi broj parnih znamenki i broj neparnih znamenki. Program ispiše izračunate brojeve. Na primjer za učitani broj 12345 treba ispisati sljedeće: U broju 12345 ima parnih znamenki: 2 i neparnih znamenki: 3
*/

#include <iostream>
using namespace std;

int main() {
    int broj, parni = 0, neparni = 0;
    cout << "Unesite nenegativni cijeli broj: ";
    cin >> broj;

    while (broj > 0) {
        int znamenka = broj % 10;
        if (znamenka % 2 == 0) {
            parni++;
        } else {
            neparni++;
        }
        broj /= 10;
    }

    cout << "U broju " << broj << " ima parnih znamenki: " << parni << " i neparnih znamenki: " << neparni << endl;
    return 0;
}

/*
Ovaj program koristi petlju while za iteraciju kroz znamenke broja, a zatim provjerava svaku znamenku da li je parna ili neparna. Brojači parni i neparni se povećavaju odgovarajućim brojem znamenki, a na kraju se ispisuju izračunati brojevi.
*/