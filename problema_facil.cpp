#include <iostream>
#include <string.h>
#define MAX(a,b) ((a) > (b) ? (a) : (b))

using namespace std;

int main ()
{
    char numero[1024];

    while(cin >> numero)
    {
        int base = 0, laco, tamanho = strlen(numero) - 1, maior = 0, cont=0;
        for(laco = 0; laco <= tamanho; laco++)
            maior = (int)MAX(numero[laco], maior);
        for (laco = maior; laco >= 48; laco--)
        {
            if(laco == 65 )
                laco-=7;
            if(laco == 97)
                laco-=6;
            cont++;
        }
        cout << cont << endl;

    }

    return 0;
}
