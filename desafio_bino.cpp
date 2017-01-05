#include <iostream>

using namespace std;

int main()
{
    int quant_num;

    cin >> quant_num;

    int numeros[quant_num], laco, mult2 = 0, mult3 = 0, mult4 = 0, mult5 = 0;

    for(laco = 0; laco < quant_num; laco++)
    {
        cin >> numeros[laco];

        if (numeros[laco] % 2 == 0)
            mult2++;
        if (numeros[laco] % 3 == 0)
            mult3++;
        if (numeros[laco] % 4 == 0)
            mult4++;
        if (numeros[laco] % 5 == 0)
            mult5++;
    }

    cout << mult2 << " Multiplo(s) de 2" << endl;
    cout << mult3 << " Multiplo(s) de 3" << endl;
    cout << mult4 << " Multiplo(s) de 4" << endl;
    cout << mult5 << " Multiplo(s) de 5" << endl;

    return 0;
}
