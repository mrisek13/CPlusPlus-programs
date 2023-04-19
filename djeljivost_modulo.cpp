/* 
Napiši program koji određuje je li uneseni broj djeljiv s 2
*/

#include <iostream>
using namespace std;

int main() {
    int broj;
    cout<<"Unesi broj:"<<endl;
    cin>>broj;
    if (broj%2==0) {
        cout<<"Broj je djeljiv s 2";
    } else {
        cout<<"Broj nije djeljiv s 2";
    }
    
    return 0;
}