#include <iostream>

using namespace std;

int mostra_primo (int primo)

{
	int verifica, eprimo;

	verifica = primo;

	for (; verifica > 0 ; verifica--)
		{
		if (((primo % verifica == 0) && (primo != verifica)) || (primo == 1))
		{
			eprimo = 0;
			break;
		}
			else if(verifica == 2)
			{
				eprimo = 1;
				break;
			}
		}
		return eprimo;
}

int main ()
{
    int repete;

    cin >> repete;

    while(repete--)
    {
        long long int numero;

        cin >> numero;

        if(mostra_primo(numero))
            cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }

    return 0;
}
