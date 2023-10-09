#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
struct Artikl
{
    char naziv[20];
    char dobavljac[20];
    char mj[5];
    int kolicina;
    char proizvodjac[30]; // proizvođač
    double cijena;
};
vector<Artikl> vec;
void meni();
void upis();            // upis artikla
void ispis();           // ispis svih artikla sa skladišta
void brisanjeArtikli(); // brisanje svih artikala skladišta
void brisiArtikl();
void provjeraKol();
void skladiste();

int main()
{
    meni();
    return 0;
}

void meni()
{
    int izbor = 0;
    do
    {
        system("cls"); // brisanje ekrana
        cout << "M E N I" << endl;
        cout << "1. Unos artikala u skladiste" << endl;
        cout << "2. Brisanje artikla sa skladista" << endl;
        cout << "3. Ispis svih artikala skladista" << endl;
        cout << "4. Provjera kolicine manje od 10" << endl;
        cout << "5. Brisanje svih artikala skladista" << endl;
        cout << "6. Skladiste" << endl
             << endl;
        cout << "7. Izlaz" << endl;
        cout << "Odaberi opciju menija:";
        cin >> izbor;
        switch (izbor)
        {
        case 1:
            upis();
            break;
        case 2:
            brisiArtikl();
            break;
        case 3:
            ispis();
            break;
        case 4:
            provjeraKol();
            break;
        case 5:
            brisanjeArtikli();
            break;
        case 6:
            skladiste();
            break;
        case 7:
            cout << "Kraj programa!" << endl;
            break;
        } // switch
    } while (izbor != 6);
}

void upis()
{
    Artikl A;
    string dataS;
    system("cls"); // brisanje ekrana
    cout << "Upisi naziv artikla: ";
    cin >> A.naziv;
    cout << "Upisi kolicinu artikla: ";
    cin >> A.kolicina;
    cout << "Upisi mjernu jedinicu artikla: ";
    cin >> A.mj;
    cout << "Upisi naziv dobavljaca: ";
    cin >> A.dobavljac;
    cout << "Upisi naziv proizvodaca: ";
    cin >> A.proizvodjac;
    cout << "Cijena: ";
    cin >> A.cijena;
    // cin.getline(A.proizvodjac, 30);
    vec.push_back(A);
}

void ispis()
{
    system("cls"); // brisanje ekrana
    int br = 1;
    for (int x = 0; x < vec.size(); x++)
    {
        Artikl A = (Artikl)vec.at(x);
        cout << br << ". Artikl: " << A.naziv << " " << A.kolicina << " " << A.mj << "Cijena: " << A.cijena << endl;
        cout << "Naziv dobavljaca: " << A.dobavljac << endl
             << endl;
        br++;
    }
    system("PAUSE");
}

void brisanjeArtikli()
{
    system("cls"); // brisanje ekrana
    char odgovor;
    cout << "Zelite li obrisati sve artikle u skladistu (D / N) ?";
    cin >> odgovor;
    if (toupper(odgovor) == 'N')
        return;
    vec.clear();
    cout << endl
         << "Svi artikli u skladistu su obrisani!" << endl;
    system("PAUSE");
}

void brisiArtikl()
{
    system("cls"); // brisanje ekrana
    char naziv[20];
    cout << "Upisi naziv artikla kojeg zelis obrisati: ";
    cin >> naziv;
    bool OK = false; // nije obrisano
    for (int x = 0; x < vec.size(); x++)
    {
        Artikl A = (Artikl)vec.at(x);
        if (strcmp(A.naziv, naziv) == 0)
        {
            vec.erase(vec.begin() + x);
            cout << "Artikl je obrisani!" << endl
                 << endl;
            OK = true;
            break;
        }
    }
    if (!OK)
        cout << "Artikl nije pronaden." << endl
             << endl;
    system("PAUSE");
}

void provjeraKol()
{
    system("cls");
    int br = 1;
    for (int x = 0; x < vec.size(); x++)
    {
        Artikl A = (Artikl)vec.at(x);
        if (A.kolicina <= 10)
        {
            cout << br << ". Artikl: " << A.naziv << " " << A.kolicina << " " << A.mj << "Cijena: " << A.cijena << endl;
            cout << "Naziv dobavljaca: " << A.dobavljac << endl
                 << endl;
            br++;
        }
        else
            cout << "Nema." << endl;
    }
    system("PAUSE");
}

void skladiste()
{
    double vsklad = 0;
    Artikl X;
    for (int x = 0; x < vec.size(); x++)
    {
        Artikl X = (Artikl)vec.at(x);
        vsklad += X.cijena * (double)X.kolicina;
    }
    cout << "Vrijednost skladista: " << vsklad << endl;
}