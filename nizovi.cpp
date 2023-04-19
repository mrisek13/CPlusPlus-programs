/*
napiši c++ program koji će učitati dva niza znakova i ispisati slova koja se nalaze i u jednom i u drugom nizu. pretpostavi da nizovi sadrže samo velika slova
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
   char niz1[26], niz2[26], zajednicki[26];
   int duljina1, duljina2, duljina_zajednickog = 0;

   // učitaj prvi niz
   cout << "Unesite prvi niz: ";
   cin >> niz1;
   duljina1 = strlen(niz1);

   // učitaj drugi niz
   cout << "Unesite drugi niz: ";
   cin >> niz2;
   duljina2 = strlen(niz2);

   // prođi kroz oba niza i pronađi zajednička slova
   for (int i = 0; i < duljina1; i++) {
      for (int j = 0; j < duljina2; j++) {
         if (niz1[i] == niz2[j]) {
            zajednicki[duljina_zajednickog] = niz1[i];
            duljina_zajednickog++;
            break;
         }
      }
   }

   // ispiši zajednička slova
   cout << "Zajednička slova su: ";
   for (int i = 0; i < duljina_zajednickog; i++) {
      cout << zajednicki[i] << " ";
   }

   return 0;
}

/*
U ovom programu koristimo tri niza: niz1 za prvi niz, niz2 za drugi niz i zajednicki za pohranjivanje zajedničkih slova. Također, koristimo tri varijable za pohranjivanje duljine svakog niza i duljine zajedničkih slova.

Nakon učitavanja nizova, prolazimo kroz oba niza i pronalazimo zajednička slova. Kad pronađemo zajedničko slovo, dodajemo ga u zajednicki niz. Kad smo prošli kroz oba niza, ispisujemo zajednicki niz koji sadrži zajednička slova.*/
