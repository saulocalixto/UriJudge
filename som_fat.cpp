#include <iostream>

using namespace std;

long double Fatorial (long long int numero)
{
    if (numero < 1)
        return (1);
    else return (numero*Fatorial(numero-1));
}

int main ()
{
    long long int soma;
    long long int numero1, numero2;

    while(cin >> numero1 >> numero2)
    {
        soma = Fatorial(numero1) + Fatorial(numero2);

        cout << soma << endl;
    }

    return 0;
}
