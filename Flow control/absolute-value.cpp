/*
Ispišite apsolutnu vrijednost broja koji je unio korisnik
*/

#include <iostream>
using namespace std;

int main()
{
  float broj;
  cout << "Unesite broj: ";
  cin >> broj;

  cout << "Apsolutna vrijednost unesenog broja je: " << abs(broj) << endl;
  return 0;
}