#include <iostream>
using namespace std;

int main(){

    float x, y;
    cout << "Upisi dva različita broja:\n";
    if( !(cin >> x && cin >> y) ) // ako je pogrješka kod unosa broja
    { 
        cout << "Pogrješan unos brojeva!" << endl;
    }
    else
    {
        cout << "Veći broj iznosi: "<< (x > y ? x : y) << endl;
    }
    
    return 0;
}