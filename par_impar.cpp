#include <iostream>

using namespace std;

int main ()
{
    int escolha, jog1, jog2, roubo, acusar;

    cin >> escolha >> jog1 >> jog2 >> roubo >> acusar;

    if(roubo == 1)
    {
        if(acusar == 0)
            cout << "Jogador 1 ganha!" << endl;
        else cout << "Jogador 2 ganha!" << endl;
    }
    else if(acusar == 1)
        cout << "Jogador 1 ganha!" << endl;
    else
    {
        if( (jog1 + jog2) % 2 == 0 )
        {
            if(escolha == 1)
                cout << "Jogador 1 ganha!" << endl;
            else cout << "Jogador 2 ganha!" << endl;
        }
        else
        {
            if (escolha == 0)
                cout << "Jogador 1 ganha!" << endl;
            else cout << "Jogador 2 ganha!" << endl;
        }
    }

    return 0;
}
