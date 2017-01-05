#include <iostream>

using namespace std;

int main()
{
    int linha, coluna;
    int verifica = 0;

    cin >> linha >> coluna;

    int terreno[linha][coluna], contl, contc;


    for (contl = 0; contl < linha; contl++)
    {
        for (contc = 0; contc < coluna; contc++)
        {
            cin >> terreno[contl][contc];
        }
    }

    for (contl = 0; contl < linha; contl++)
    {
        for (contc = 0; contc < coluna; contc++)
        {
            if (terreno[contl][contc] == 42)
            {
                if( (terreno[contl-1][contc] == 7) && (terreno[contl+1][contc] == 7) && (terreno[contl][contc+1] == 7) && (terreno[contl][contc-1] == 7) )
                {
                    if ((terreno[contl+1][contc +1] == 7) && (terreno[contl+1][contc-1] == 7) && (terreno[contl-1][contc-1] == 7) && (terreno[contl-1][contc+1] == 7))
                    {
                        cout << contl+1 << " " << contc+1 << endl;
                        verifica++;
                        break;
                    }
                }
            }
        }

        if (verifica > 0)
        {
            break;
        }
    }

    if (verifica == 0)
    {
        cout << "0" << " 0" << endl;
    }


    return 0;
}
