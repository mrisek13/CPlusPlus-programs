#include <iostream>
using namespace std;

int main() {
    
    int ispravanPin = 1234;
    int pin, pokusaj = 0;
    
    do {
        cout<<"Unesite PIN:"<<endl;
        cin>>pin;
        pokusaj++;
        if (pokusaj>2) {
            cout<<"Kartica je blokirana."<<endl;
            return 0;
        }
    } while (pin!=ispravanPin);
    
    cout<<"Dobrodosli. Koji iznos zelite podici?"<<endl;

    return 0;
}