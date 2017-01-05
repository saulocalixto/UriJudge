#include <iostream>

using namespace std;

int main ()
{
    unsigned int linhas, num1 = 1, num2 = 1, num3 = 1, mult6 = 1, soma3 = 2, soma2 = 2;

    cin >> linhas;

    while (linhas--)
    {
        cout << num1 << " " << num2 << " " << num3 << endl;
        cout << num1 << " " << num2+1 << " " << num3+1 << endl;
        num1++;
        num2 = (num2 + 1) + soma2;
        num3 = (num3 + 1) + 6 * mult6;
        mult6 += soma3++ ;
        soma2 += 2;
    }
}
