#include <iostream>

using namespace std;

int main ()
{
    int num_testes;

    cin >> num_testes;

    while(num_testes--)
    {
        int pa, pb, anos = 0;
        float ga, gb;

        cin >> pa >> pb >> ga >> gb;

        while (pa <= pb)
        {
            pa = (int) (pa* (ga/100) ) + pa;
            pb = (int) (pb* (gb/100) ) + pb;
            anos++;
        }
        if (anos > 100)
            cout << "Mais de 1 seculo." << endl;
        else cout << anos << " anos." << endl;
    }

    return 0;
}
