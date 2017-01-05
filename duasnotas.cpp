#include<iostream>

int notas[6] = {2, 5, 10, 20, 50, 100};

int DuasNotas (int troco)
{
    int possible = 0, cont = 0;

    while(notas[cont++] < troco)
    {
        int cont2;
        for (cont2 = 0; cont2 < 6; cont2++)
        {
            if( (notas[cont] + notas[cont2]) == troco )
            {
                possible = 1;
                break;
            }
        }
    }

    return (possible);
}

using namespace std;

int main ()
{
    long int valor, cliente;

    cin >> valor >> cliente;

    while (valor && cliente)
    {
        int troco = cliente - valor;

        if( DuasNotas(troco) )
            cout << "possible" << endl;
        else cout << "impossible" << endl;

        cin >> valor >> cliente;
    }

    return 0;
}
