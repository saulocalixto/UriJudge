#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int repete;

    cin >> repete;

    while (repete--)
    {
        int alunos_turma, soma = 0, total_al;
        cin >> alunos_turma;
        int notas[alunos_turma], laco = 0, media;

        total_al = alunos_turma;

        while(alunos_turma--)
        {
            cin >> notas[laco];
            soma += notas[laco++];
        }

        media = soma / total_al;
        int acima = 0;

        while(laco--)
        {
            if(notas[laco] > media)
                acima++;
        }

        float porcentagem;

        porcentagem = (float) (acima * 100) / total_al;

        cout << setiosflags(ios::fixed) << setprecision(3) << porcentagem << "%" << endl;
    }
    return 0;
}
