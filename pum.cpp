#include <iostream>

using namespace std;

int main()
{
    int pum = 1, linhas;

    cin >> linhas;

    while (linhas--)
    {
        cout << pum << " " << pum+1 << " " << pum+2 << " PUM" << endl;

        pum += 4;
    }

    return 0;
}
