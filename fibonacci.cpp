#include <iostream>

using namespace std;

int main() {

    int numero = 1, aux = 0, contar, n;

    cin >> n;
    cout << "0";
    for(contar = 0; contar < (n-1); contar++)
    {
        cout << " " << numero;
        numero += aux;
        aux = numero - aux;
    }
    cout << endl;
    return 0;
}
