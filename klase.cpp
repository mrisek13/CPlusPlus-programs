#include <iostream>
using namespace std;

class Lokacija {
    public:
        string ulica;
        string naselje;
        int kbr;
        int pbr;
        bool studentskiDom;
};

class Fakultet {
    public:
        string naziv;
        Lokacija lokacija;
        Lokacija altLokacija;

        string getNaziv() {
            return this->naziv;
        }

        void setNaziv(string naziv) {
            this->naziv=naziv;
        }
};

class Student {
    public:
        string ime;
        string prezime;
        int godina;
        bool redovan;
        Lokacija lokacija;
        Fakultet fakultet;

        string getIme() {
            return this->ime;
        }

        void setIme(string ime) {
            this->ime=ime;
        }

        string getPrezime() {
            return this->prezime;
        }

        void setPrezime(string prezime) {
            this->prezime=prezime;
        }

        string getFakultet() {
            return this->fakultet.getNaziv();
        }

        void setFakultet(Fakultet fakultet) {
            this->fakultet=fakultet;
        }
};

int main() {

    Student s;
    s.setIme("Maja");
    s.setPrezime("Risek");
    s.setIme("Olga");
    cout<<s.getIme();

    Fakultet f;
    f.setNaziv("MEV");

    s.setFakultet(f);
    cout<<s.getFakultet();

    return 0;
}