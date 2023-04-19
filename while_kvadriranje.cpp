#include <iostream>
using namespace std;

int main() {

    int n=0, broj=1;
    cout<<"Unesite broj: ";
    cin>>n;

    while(broj<=n){
        cout<<"Kvadrat broja "<<broj<<" je "<<broj*broj<<endl;
        broj++;
    }

    return(0);
}