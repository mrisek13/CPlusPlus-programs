#include <iostream>
using namespace std;

int main() {
    int n, unos, zbroj;
    cout<<"Unesite prirodan broj: ";
    cin>>n;

    for (int i=1; i<=n; i++) {
        cout<<"Unesite broj: ";
        cin>>unos;
        if (unos%2 == 0)
            zbroj = zbroj + unos;
    }

    cout<<"Zbroj parnih brojeva je: "<<zbroj;

    return (0);
}