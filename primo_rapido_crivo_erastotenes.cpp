#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int repete;

    cin >> repete;

    while(repete--)
    {
        long long int numero, limite, laco, verifica = 1;

        cin >> numero;

        if(numero == 2 || numero == 3)
        {
            cout << "Prime" << endl;
            continue;
        }
        limite = sqrt(numero);
        for(laco = 2; laco < limite+1; laco++)
        {
            if( (numero % laco) == 0)
                {
                    verifica = 0;
                    break;
                }
        }
        if(verifica)
            cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }

    return 0;
}
