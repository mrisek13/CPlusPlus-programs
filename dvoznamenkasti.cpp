#include <iostream>
using namespace std;
int main()

{
    int broj;
    cout<<"Unesite dvoznamenkasti broj, da bi izracunali sumu znamenki"<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"Unesite dvoznamenkasti broj: ";
    cin>>broj;
    if (broj>99 || broj<10) {
    cout<<"Broj koji ste unijeli nema 2 znamenke!!!"<<endl;
    } else {
    cout<<"Zbroj znamenki unesenog broja je: "<<(broj/10)+(broj%10)<<endl;
    }
    return 0;
}