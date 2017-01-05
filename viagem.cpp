#include <iostream>
#include <iomanip>
#include <math.h>
#define ARRED(x, z) floor( x*pow(10, z) )/pow(10, z)

using namespace std;

int main()
{
    int viajantes;

    cin >> viajantes;

    while (viajantes)
    {
        int laco = 0;
        string decimal;
        double gastos[viajantes], total = 0, media, repartir = 0;
        for (laco = 0; laco < viajantes; laco++)
        {
            cin >> gastos[laco];
            total += (double)gastos[laco];
        }

        media = (double) total / viajantes;

        for (laco = 0; laco < viajantes; laco++)
        {
            if(gastos[laco] > media)
            {
                repartir += ARRED((gastos[laco] - media),3)*10000;
            }
        }
        repartir = (int) repartir;
        cout << "$" << setiosflags(ios::fixed) << setprecision(5) << (double)repartir/10000<< endl;

        cin >> viajantes;

    }

    return 0;
}
