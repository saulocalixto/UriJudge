#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main ()
{
    int laco = 20, cont = 0, lacof = 20;
    int numero, aux;
    vector<int> menor_dez;

    while(laco--)
    {
        cin >> numero;

        menor_dez.push_back(numero);
    }

    vector<int>::iterator it;

    for(it = menor_dez.end()-1; it >= menor_dez.begin(); it--)
    {
        cout << "N[" << cont++ << "] = " << *it << endl;
    }

    return 0;
}
