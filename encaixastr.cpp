#include<iostream>
#include <string.h>
#define MAX 1000

using namespace std;

int main ()
{
    int repete;

    cin >> repete;

    while(repete--)
    {
        char a[MAX], b[MAX];
        int laco, lacoa, verifica = 0;

        cin >> a >> b;

        lacoa = (strlen(a))-1;

            for( (laco = strlen(b) - 1); laco >= 0; laco--)
            {
                if(a[lacoa] != b[laco])
                    {
                    cout << "nao encaixa" << endl;
                    verifica = 0;
                    break;
                    }
                else verifica = 1;

                lacoa--;
            }

            if(verifica)
                cout << "encaixa" << endl;
    }

    return 0;
}
