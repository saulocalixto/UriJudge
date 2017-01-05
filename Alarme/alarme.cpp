#include <iostream>

using namespace std;

int main ()
{
    int h1, h2, m1, m2;

    cin >> h1 >> m1 >> h2 >> m2;

    while(h1 || h2 || m1 || m2)
    {
        int diferenca = 0, horas = 0, minutos = 0;
        while(h1 < h2 || m1 < m2)
        {
            if(h1 != h2)
                h1++;
            if (m1 != m2)
                m1++;
            minutos++;
            horas += 60;
        }
        diferenca = minutos + horas;
        cout << diferenca << endl;

        cin >> h1 >> m1 >> h2 >> m2;

    }

    return 0;
}
