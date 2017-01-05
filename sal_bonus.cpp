#include <iostream>
#define COMISSAO 0.15

using namespace std;

int main ()
{
    double sal_fixo, total_vendas, total;
    string nome;

    cin >> nome >> sal_fixo >> total_vendas;

    total = sal_fixo + (COMISSAO * total_vendas);
    cout.precision(2);
    cout << "TOTAL = R$ " << fixed << total;

    return 0;
}
