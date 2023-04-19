/*
napiši c++ program  koji učitava prirodni broj. Ako učitani broj nije troznamenkasti, treba ispisati odgovarajuću poruku i završiti izvođenje programa. Ako je učitani broj troznamenkasti, program treba ispisati prirodni broj koji tvore znamenke učitanog broja poredane po veličini. Na primjer ako je zadan broj 563, program treba ispisati broj 653
*/

#include <iostream>

using namespace std;

int main() {
    int broj, stotice, desetice, jedinice;

    cout << "Unesite troznamenkasti prirodni broj: ";
    cin >> broj;

    // provjeri da li je broj troznamenkasti
    if (broj >= 100 && broj <= 999) {
        // izdvoji znamenke broja
        stotice = broj / 100;
        desetice = (broj / 10) % 10;
        jedinice = broj % 10;

        // sortiraj znamenke po veličini i ispiši ih kao novi broj
        if (stotice > desetice) swap(stotice, desetice);
        if (desetice > jedinice) swap(desetice, jedinice);
        if (stotice > desetice) swap(stotice, desetice);
        cout << "Broj koji tvore znamenke učitanog broja poredane po veličini je: " << stotice << desetice << jedinice << endl;
    } else {
        cout << "Uneseni broj nije troznamenkasti prirodni broj!" << endl;
    }

    return 0;
}

/*
U ovom programu koristimo tri varijable za pohranjivanje znamenki troznamenkastog broja. Nakon što se učita broj, provjeravamo da li je troznamenkasti prirodni broj. Ako nije, ispisujemo odgovarajuću poruku. U suprotnom, izdvojimo znamenke broja i sortiramo ih po veličini pomoću swap() funkcije. Na kraju, ispisujemo novi broj koji se sastoji od znamenki učitanog broja poredanih po veličini.
*/