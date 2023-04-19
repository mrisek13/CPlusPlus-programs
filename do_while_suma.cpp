#include <iostream>
using namespace std;

int main() {

    int broj, zbroj = 0, brojac = 0;

    do {
        cout<<"Unesite broj: ";
        cin>>broj;
        if(broj>10 && broj<200 && broj%10==3) {
            brojac++;
        } else {
            brojac = 0;

        }
        zbroj += broj;
    } while(brojac<3);

    cout<<"Suma svih upisanih brojeva je "<<zbroj;
}