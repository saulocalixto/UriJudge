#include <iostream>

using namespace std;

int main ()
{
    int linha, coluna, numero = 1, repetecoluna;

    cin >> coluna >> linha;

    linha /= coluna;

    while(linha--)
    {
        repetecoluna = (coluna-1);
        while(repetecoluna--)
        {
            cout << numero++ << " ";
        }
        cout << numero++ << endl;
    }
    return 0;
}
