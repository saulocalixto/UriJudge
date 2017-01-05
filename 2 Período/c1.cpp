#include <iostream>

using namespace std;

int Not (int n, int m, char gem1[][100], char gem2[][100]){
    int linha, coluna, coluna2 = 0, verifica = 0, linha2 = 0;
    if( n != m )
        return(1);
    else return (0);
//    else{
//        while(linha2 >= n){
//            verifica = 0;
//            for(coluna = 0, coluna2 = 0; coluna < n, coluna2 < n; coluna++, coluna2++){
//                if (gem1[linha2][coluna2] == gem2[linha][coluna])
//                    verifica = 1;
//            }
//            linha++;
//            linha2++;
//            if(verifica == 0)
//                break;
//            }
//        }
//        if(!verifica)
//            return (1);
//        else{
//            return (0);
//        }
}

int Perfect (int n, char gem1[][100], char gem2[][100]){

    int linha, coluna, verifica = 1;

    for(linha = 0; linha < n; linha++){
        for(coluna = 0; coluna < n; coluna++){

            if(gem1[linha][coluna] != gem2[linha][coluna])
                verifica = 0;
        }
    }

    if(verifica)
        return(1);
    else return(0);

}

int main ()
{
    int n, m, linha, coluna;
    cin >> n;
    char gem1[100][100], gem2[100][100];
    for(linha = 0; linha < n; linha++){
        for(coluna = 0; coluna < n; coluna++){
            cin >> gem1[linha][coluna];
        }
    }

    cin >> m;
    for(linha = 0; linha < m; linha++){
        for(coluna = 0; coluna < m; coluna++){
            cin >> gem2[linha][coluna];
        }
    }

    if( Not(n, m, gem1, gem2) ){
        cout << "Not Related" << endl;
    }
    else if( Perfect(n, gem1, gem2) ){
        cout << "Perfect Twins" << endl;
    }

    return 0;
}
