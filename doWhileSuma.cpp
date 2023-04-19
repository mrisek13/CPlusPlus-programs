/*
napiši c++ program koji učitava cijele brojeve. učitavanje treba prekinuti kada se učita broj 0. Potrebno je ispisati broj učitanih troznamenkastih, dvoznamenkastih i jednoznamenkastih brojeva
*/

#include <iostream>

using namespace std;

int main() {
   int broj, jednoznamenkasti = 0, dvoznamenkasti = 0, troznamenkasti = 0;

   // učitaj brojeve sve dok se ne učita 0
   do {
      cout << "Unesite broj: ";
      cin >> broj;

      if (broj > 0 && broj < 10) {
         jednoznamenkasti++;
      } else if (broj >= 10 && broj < 100) {
         dvoznamenkasti++;
      } else if (broj >= 100 && broj < 1000) {
         troznamenkasti++;
      }
   } while (broj != 0);

   // ispiši broj učitanih troznamenkastih, dvoznamenkastih i jednoznamenkastih brojeva
   cout << "Ucitano: " << jednoznamenkasti << " jednoznamenkastih brojeva, "
        << dvoznamenkasti << " dvoznamenkastih brojeva i "
        << troznamenkasti << " troznamenkastih brojeva." << endl;

   return 0;
}


/*
U ovom programu koristimo samo jednu varijablu za pohranjivanje učitanih brojeva. Nakon učitavanja broja, provjeravamo njegovu duljinu (broj znamenki) i povećavamo odgovarajući brojač. Program će nastaviti učitavati brojeve sve dok se ne učita broj 0.

Nakon što se učita broj 0, program će ispisati broj učitanih troznamenkastih, dvoznamenkastih i jednoznamenkastih brojeva.
*/