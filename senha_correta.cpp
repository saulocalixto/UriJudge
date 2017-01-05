#include <iostream>

using namespace std;

int Senha_correta (int senha)
{
    return (senha == 2002);
}

int main()
{
    int senha;

    while( !(Senha_correta(senha)) )
    {
        cin >> senha;

        if(Senha_correta(senha))
            cout << "Acesso Permitido" << endl;
        else
            cout << "Senha Invalida" << endl;
    }
    return 0;
}
