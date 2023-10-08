#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Proizvod {
    string ime;
    int cijena;
} artikli [3];

void ispisProizvoda(Proizvod p);

int main() {
    string s;
    int n;

    for (n=0; n<3; n++) {
        cout<<"Unesite proizvod: ";
        getline(cin,artikli[n].ime);
        cout<<"Unesite cijenu: ";
        getline(cin,s);
        stringstream(s) >> artikli[n].cijena;
    }

    cout<<"Unijeli ste ove proizvode: "<<endl;
    for (n=0; n<3; n++) {
        ispisProizvoda(artikli[n]);
    }
}

void ispisProizvoda(Proizvod p) {
    cout<<p.ime;
    cout<<" ("<< p.cijena<<"EUR)"<<endl;
}
