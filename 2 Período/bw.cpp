#include <iostream>

using namespace std;

int main () {

    int n, l, c, maximo, paginas = 0, linha = 0, cont, cont2, contar, contlinha = 0;
    string conto;

    cin >> n >> l >> c;
    cin.ignore();

    getline (cin,conto);

    for(cont = 0; cont < conto.size(); cont++){

        if(contlinha == c){
            if( (conto[cont + 1] != ' ' || conto[cont] != ' ') ){

                for(cont2 = cont; cont2 > 0; cont2--){

                    if(conto[cont2] == ' ' && cont2 < c){
                        linha++;
                        cont = cont2;
                        contlinha = 0;
                        break;
                    }
                    else if(conto[cont2] == ' ' && cont2 >= c ) {
                        linha++;
                        contlinha = 0;
                        break;
                    }
                }
            }
            else {
                linha++;
                if(conto[cont + 1] == ' ')
                    cont += 2;
                contlinha = 0;
            }
        }
        else contlinha++;

        if(linha == l){
            paginas++;
            linha = 0;
        }

    }
    if(contlinha != 0)
        paginas++;

    cout << paginas << endl;

    return 0;
}
