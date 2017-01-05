#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main ()
{
    int n;
    long double fibonacci_binet, raizpositiva, raiznegativa;

    cin >> n;

    raizpositiva = pow( ( (1+sqrt(5))/2 ) ,n);

    raiznegativa = pow( ( (1-sqrt(5))/2 ) ,n);

    fibonacci_binet = (double) (raizpositiva - raiznegativa) / sqrt(5);

    cout << setiosflags (ios::fixed) << setprecision(1) << fibonacci_binet << endl;

    return 0;
}
