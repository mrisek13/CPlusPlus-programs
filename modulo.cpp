#include <iostream>
using namespace std;

int main() {
    int djeljenik, djelitelj;
    cout<<"Upišite djeljenik: "<<endl;
    cin>>djeljenik;
    cout<<"Upišite djelitelj: "<<endl;
    cin>>djelitelj;
    cout<<"Količnik je: "<<djeljenik/djelitelj<<endl;
    cout<<"Ostatak prilikom djeljenja je: "<<djeljenik%djelitelj<<endl;

    return 0;
}