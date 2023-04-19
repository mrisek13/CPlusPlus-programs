#include <iostream>
#include <climits> // Određivanje raspona ...
using namespace std;

int main()
{
    char broj;
    cout << "Raspon int tipa podatka s predznakom i bez"<< endl << endl;
    cout << "Minimum i maksimum"<< endl<< "---------------------------------------"<< endl;
    cout << "int s predznakom: " << INT_MIN << " "<< INT_MAX << endl;
    cout << "int bez predznaka: " << " 0 "<< UINT_MAX << endl;
    cout << "sizeof: " << sizeof(broj); 
    return 0;
}