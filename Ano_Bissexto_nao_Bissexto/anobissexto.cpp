#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

int Bissexto(char ano[10000])
{
   int tamanho = strlen(ano)-1, auxi, auxf;
   auxi = (int)(ano[tamanho-1] - 48);
   auxi = (int)((auxi*10)) + (ano[tamanho] - 48);
   auxf = (int)(ano[0] - 48);
   auxf = (int)(auxf*10) + (ano[1] - 48);
   if( auxi == 0 )
   {
       if(auxf % 4 == 0)
           return(1);
       else return(0);
   }

    else if(auxi % 4 == 0)
        return(1);
    else return (0);
}
int Huluculu(char ano[10000])
{
    int tamanho, laco, soma = 0,aux;
    tamanho = strlen(ano)-1;
    for(laco = 0; laco <= tamanho; laco++)
        soma = soma + (ano[laco] - 48);
    aux = ((ano[tamanho] - 48) % 10 );
    if( (soma % 3 == 0) && (aux == 0 || aux == 5) )
        return(1);
    else return (0);
}
int Buluculu (char ano[10000])
{
    int tamanho, laco, o1=0, o2=0, aux;

    tamanho = strlen(ano) - 1;
    for(laco = 0; laco < tamanho; laco += 2)
        o1 += (int)(ano[laco] - 48);
    for(laco = 1; laco < tamanho; laco += 2)
        o2 += (int)(ano[laco] - 48);
    aux = (int)ano[tamanho] - 48;

    if(Bissexto(ano))
    {
    if( (o1-o2) % 11 == 0 && (aux == 5 || aux == 0) )
        return(1);
    else return(0);
    }
    else return(0);

}

int main ()
{
    char year[10000];
    int cont = 0;

    while( (scanf("%s", year)) != EOF )
    {
        if (cont != 0)
            cout << endl;

        if( !(Bissexto(year)) && !(Huluculu(year)) )
        {
            cout << "This is an ordinary year." << endl;
        }
        if(Bissexto(year))
        {
            cout << "This is leap year." << endl;
        }
        if(Huluculu(year))
        {
            cout << "This is huluculu festival year." << endl;
        }
        if(Buluculu(year))
        {
            cout << "This is bulukulu festival year." << endl;
        }
        cont++;
    }
    return 0;
}
