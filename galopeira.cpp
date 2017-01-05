#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int repete;

    cin >> repete;

    while (repete--)
    {
        int contar = 0;
        string galopeira;
        float tamanho = 0;

        cin >> galopeira;

        while (galopeira[contar++])
            tamanho++;
        tamanho /= 100;

        cout << setiosflags (ios::fixed) << setprecision(2) << tamanho << endl;
    }

    return 0;
}
