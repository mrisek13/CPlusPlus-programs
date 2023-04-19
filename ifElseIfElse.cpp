#include <iostream>
using namespace std;

int main() {
    int ocjena;
    cout<<"Upišite svoju ocjenu: "<<endl;
    cin>>ocjena;
    if (ocjena==5) {
        cout<<"Vaša ocjena je odličan"<<endl;
    } else if (ocjena==4) {
        cout<<"Vaša ocjena je vrlo dobar"<<endl;
    } else if (ocjena==3) {
        cout<<"Vaša ocjena je dobar"<<endl;
    } else if (ocjena==2) {
        cout<<"Vaša ocjena je dovoljan"<<endl;
    } else if (ocjena==1) {
        cout<<"Vaša ocjena je nedovoljan"<<endl;
    } else {
        cout<<"Pogrešan unos.";
    }

    return 0;
}