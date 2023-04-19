#include <iostream>
using namespace std;

int main() {
    int mjesec;

    cout<<"Upisi mjesec";
    cin>>mjesec;

    switch(mjesec){
        case 1:
        cout<<"Mjesec sijecanj, ima 31 dan.";
        break;

        case 2:
        cout<<"Mjesec veljaca, ima 28 dana.";
        break;

        case 3:
        cout<<"Mjesec ozujak, ima 31 dana.";
        break;

        // itd.

        default:
        cout<<"Pogresan unos.";
    }
}