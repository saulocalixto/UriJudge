#include <iostream>
#include <string.h>
#define MAX 80

using namespace std;

int main()
{
    int tamanho;
    char form[500];

    cin.getline(form,500);

    tamanho = strlen(form);

    if(tamanho <= MAX)
        cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
