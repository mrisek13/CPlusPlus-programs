#include <iostream>
using namespace std;

int main(){

    // if – else naredba
    int a;
    cin >> a;
    if (a < 100){
        int razlika = 100 - a; 
        cout << "Broj a je manji od broja 100 za: "<< razlika <<endl; 
    }
    else {
        int razlika = a - 100;
        cout << "Broj a je veći od broja 100 za: "<< razlika << endl;
    }

    return 0;
}