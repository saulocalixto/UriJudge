#include <iostream>
using namespace std;

int main ()
{
    int quant_led[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int repete;

    cin >> repete;
    cin.ignore(256, '\n');

    while(repete--)
    {
        int somar = 0;
        char numero;

        while( (numero = getchar( ) ) != '\n' )
        {
            somar += quant_led[(numero - '0')];
        }


        cout << somar << " leds" << endl;
    }

    return 0;
}
