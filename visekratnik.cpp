// Napiši program koji nas traži da upišemo neki cijeli broj i zatim ispiše 10 višekratnika upisanog broja
#include <iostream>
using namespace std;

int main() {
    
    int broj;
    cout<<"Unesite neki broj"<<endl;
    cin>>broj;
    cout<<"Visekratnici broja "<<broj<<" su brojevi: "<<endl;
    for (int x=1; x<=10; x++) { // vrijednost brojača možemo iskoristiti da riješimo zadatak!
        cout<<x<<" * "<<broj<<" = ";
        cout<<x*broj<<endl;
    }
    
    system("pause");
    return 0;
}