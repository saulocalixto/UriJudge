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
        float suprimento;
        int dias = 0;

        cin >> suprimento;

        while(suprimento > 1)
        {
            suprimento *= 0.5;
            dias++;
        }
        cout << dias << " dias" << endl;
    }
    return 0;
}
