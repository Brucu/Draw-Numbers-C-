#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int licz;

    cout << "Enter the number of numbers to be drawn >> ";
    cin >> licz;
    int tablica[licz];

    for (int i = 0; i <= licz - 1; i++)
    {
        tablica[i] = rand() % 99 + 1;
    }

    for (int i = 0; i <= licz - 1; i++)
    {
        cout << tablica[i] << endl;
    }
}