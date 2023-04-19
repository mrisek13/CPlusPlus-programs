#include <iostream>
using namespace std;

int main() {
    // primjer korištenja manipulatora
    cout << showpos << 123;// ispis: +123
    // prijašnji izraz jednak je sljedećem
    cout.setf( ios::showpos);
    cout << 123;
    // ispis broja s predznakom
    cout << 22;// izlaz: +22
    // ispis bez predznaka +
    cout << noshowpos << 123;// izlaz: 123
    // prijašnja naredba jednaka je sljedećoj
    cout.unsetf( ios::showpos);
    cout << 123;

    // primjer korištenja manipulatora
    int broj;
    cout << "Molim vas da upišete broj: ";
    cin >> broj;
    cout << uppercase // for hex-digits
    << " octal \t decimal \t hexadecimal\n "
    << oct<< broj << " \t "
    << dec<< broj << " \t "
    << hex<< broj << endl;

    double x = 12.56;
    cout.precision(2);// preciznost 2
    cout << " Po defaultu: " << x << endl;
    cout << " showpoint: " << showpoint<< x << endl;
    cout << " fixed: " << fixed<< x << endl;
    cout << " scientific: " << scientific<< x << endl;

    return 0;
}