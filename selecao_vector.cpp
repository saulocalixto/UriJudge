#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main ()
{
    int laco = 100, cont = 0;
    float numero;
    vector<float> menor_dez;

    while(laco--)
    {
        cin >> numero;

        menor_dez.push_back(numero);

        if(menor_dez[cont] <= 10)
        {
            cout << setiosflags (ios::fixed) << "A[" << cont << "] = " << setprecision(1) << menor_dez[cont] << endl;
        }
        cont++;
    }

    return 0;
}
