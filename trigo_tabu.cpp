#include <iostream>
#include <math.h>
#define CONVERT_KG 12000

using namespace std;

int main ()
{
    int repete;

    cin >> repete;

    while (repete--)
    {
        int tabuleiro;
        unsigned long long graos = 1;

        cin >> tabuleiro;

        graos = ( pow(2, tabuleiro) )/CONVERT_KG;

        cout << graos << " kg" << endl;
    }
    return 0;
}
