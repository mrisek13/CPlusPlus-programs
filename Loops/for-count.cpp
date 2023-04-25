/*
Napišite program koji će zbrojiti brojeve od 0 do 10.
*/

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i;
    }
    cout << "Ukupan zbroj brojeva od 0 do 10 je: " << sum << endl;
    return 0;
}