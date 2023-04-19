#include <iostream>
using namespace std;

int main(){

    // složeni uvjet if naredbe
    char a,b; // deklariranje varijabli
    cin >> a;
    cin >> b;

    if (a == 10 && b!=a ){ // složeni uvjet provjere
        int c=a+b;
        cout << "Suma iznosi: " << c << endl;
    }

    return 0;
}