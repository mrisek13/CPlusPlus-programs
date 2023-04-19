/*napiši c++ program  koji učitava niz od 20 znakova i znak c. Ulazni niz promijeniti na način da se ispred svakog pojavljivanja samoglasnika ubaci znak c. Nakon promjene, niz treba ispisati.*/

#include <iostream>

using namespace std;

int main() {
    char niz[20], c;
    const char SAMOGLASNICI[] = "aeiouAEIOU";

    cout << "Unesite niz od 20 znakova: ";
    cin.getline(niz, 20);

    cout << "Unesite znak c: ";
    cin >> c;

    // promijeni ulazni niz na način da se ispred svakog pojavljivanja samoglasnika ubaci znak c
    for (int i = 0; i < 20 && niz[i] != '\0'; i++) {
        if (strchr(SAMOGLASNICI, niz[i])) {
            for (int j = 19; j > i; j--) {
                niz[j] = niz[j-1];
            }
            niz[i] = c;
            i++;
        }
    }

    // ispiši promijenjeni niz
    cout << "Promijenjeni niz: " << niz << endl;

    return 0;
}


/*
U ovom programu koristimo niz od 20 znakova za pohranjivanje ulaznog niza i varijablu c za pohranjivanje znaka koji treba umetnuti ispred svakog pojavljivanja samoglasnika. Također, definiramo niz SAMOGLASNICI koji sadrži sve samoglasnike.

Nakon što se učita ulazni niz i znak c, prolazimo kroz niz znakova i provjeravamo da li je trenutni znak samoglasnik. Ako jest, pomaknemo sve znakove desno od trenutnog za jedno mjesto i umetnemo znak c ispred trenutnog znaka. Na kraju, ispisujemo promijenjeni niz.
*/