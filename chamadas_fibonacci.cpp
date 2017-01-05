#include <iostream>
#include <iomanip>

double Fib (int n)
{
    int contar = 0;
	if ((n == 0) || (n==1))
	{
		return (1);
	}
	else
	{
		return ((Fib(n-1))+(Fib(n-2)));
		contar++;
	}
}

using namespace std;

int main ()
{
    int repete;

    cin >> repete;

    while (repete--)
    {
        int fibo, contar, numero = 1, aux = 0, recur = 0, teste = 0, teste1 = 2;

        cin >> fibo;

        for(contar = 1; contar < fibo; contar++)
        {
            numero += aux;
            aux = numero - aux;
        }

        cout << numero << endl;


    }
    return 0;
}
