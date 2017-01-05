#include<iostream>
#include<string.h>
#define LIM 1000


using namespace std;

int main ()
{
    char falha, valor[LIM], contrato[LIM];
    int laco;

    cin >> falha >> valor;

     while( falha != '0' && valor[0] != '0' )
    {
        int laco1 = 0, zero = 0;
        for(laco = 0; laco < strlen(valor); laco++)
        {
            if(falha != valor[laco])
            {
                if (valor[laco] != '0')
                {
                    contrato[laco1] = valor[laco];
                    laco1++;
                }
                else
                {
                    if(contrato[0] != '0' && laco1 != 0)
                    {
                        contrato[laco1] = valor[laco];
                        laco1++;
                    }
                    continue;
                }
            }
        }
        if(laco1)
            contrato[laco1] = '\0';
        else {
                contrato[laco1] = '0';
                contrato[laco1+1] = '\0';
        }

        cout << contrato << endl;
        cin >> falha >> valor;
    }

    return 0;
}
