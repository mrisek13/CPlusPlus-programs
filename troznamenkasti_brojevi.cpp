#include <iostream>

using namespace std;

int main() {

    int unos, x, y, z;
    cout<<endl<<"Upisite troznamenkasti broj: ";
    cin>>unos;
    if (unos>999 || unos<100)
    cout<<"KRIVI UNOS! Unesite troznamenkasti broj!"<<endl;
    else {
    x=unos/100;
    y=(unos/10)%10;
    z=(unos%10);
    int max, min, mid, rez;
    max=x;
    if (max<y)max=y;
    if (max<z)max=z;
    min=x;
    if (min>y)min=y;
    if (min>z)min=z;
    mid=x+y+z-max-min;
    rez=100*max+10*mid+min; //rez=100*min+10*mid+max;
    cout<<"najveći broj iz datih znamenki je: "<<rez<<endl;
    }
    return 0;
}