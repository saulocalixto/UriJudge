#include <iostream>

using namespace std;

int main ()
{
    int quant_led[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int repete;

    cin >> repete;

    while(repete--)
    {
        int numero, vetor[50], contar = 0, somar = 0;

        cin >> numero;

        if (numero == 0)
        {
            cout << quant_led[numero] << " " << "leds" << endl;
            continue;
        }

        while (numero > 0)
        {
            vetor[contar] = numero % 10;

            numero /= 10;

            contar ++;
        }

        while (contar--)
        {
            somar += quant_led[vetor[contar]];
        }
        cout << somar << " " << "leds" << endl;;
    }

    return 0;
}
