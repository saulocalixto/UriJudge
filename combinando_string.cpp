#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    int repete;

    cin >> repete;
    while(repete--)
    {
        char s1[55], s2[55];
        int maior, conts1 = 0, conts2 = 0, cont;
        cin >> s1 >> s2;
        for(cont = 0; cont < (strlen(s1) + strlen(s2)) ; cont++)
        {
            if(s1[conts1])
            {
                cout << s1[conts1];
                conts1++;
            }
            if(s2[conts2])
            {
                cout << s2[conts2];
                conts2++;
            }
        }
        cout << endl;
    }
    return 0;
}
