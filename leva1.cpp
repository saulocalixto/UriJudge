#include <iostream>
#define MAX(X, Y) ( ( (X) > (Y) ) ? (X) : (Y) )

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    while(a != 0 || b != 0)
    {
        int laco = 0, carry = 0, veta[50], vetb[50], laco2 = 0, maior;

        maior = MAX(a, b);

        while(maior > 0)
        {
            veta[laco] = a % 10;
            vetb[laco] = b % 10;
            a /= 10;
            b /= 10;
            maior /= 10;
            laco++;
        }

        for(laco2 = 0; laco2 < laco; laco2++)
        {
            if( (veta[laco2] + vetb[laco2]) >= 10 )
            {
                carry++;
                veta[laco2+1] += 1;
            }
        }
        if(carry == 0)
            cout << "No carry operation." << endl;
        else if (carry == 1) cout << carry << " carry operation." << endl;
        else cout << carry << " carry operations." << endl;

        cin >> a >> b;
    }

    return 0;
}
