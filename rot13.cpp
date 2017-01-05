#include<iostream>
#include<string.h>


using namespace std;

int main ()
{
    char secreto[60];
    int carac = 0;

     while( fgets(secreto, 60, stdin) != NULL )
    {
        for(carac = 0; carac < strlen(secreto); carac++)
        {
            if(secreto[carac] >= 'a' && secreto[carac] <= 'z')
            {
                if (secreto[carac] + 13 > 'z')
                    secreto[carac] = ( 13 - ('z' - secreto[carac]) ) + 'a'-1;
                else secreto[carac] += 13;

            }

            if(secreto[carac] >= 'A' && secreto[carac] <= 'Z')
            {
                if (secreto[carac] + 13 > 'Z')
                    secreto[carac] = ( 13 - ('Z' - secreto[carac]) ) + 'A'-1;
                else secreto[carac] += 13;
            }

        }
        secreto[carac] = '\0';
        cout << secreto;
    }

    return 0;
}
