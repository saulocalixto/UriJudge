#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <string>

using namespace std;

int main (){

    int casos, cont, cont2;

    cin >> casos;
    cin.ignore(256,'\n');

    while(casos--) {

        string dieta, cafe, almoco;
        string verifica;
        bool tem = false, repete = false;

        getline(cin, dieta);
        getline(cin, cafe);
        getline(cin, almoco);

        int tamanhoc = cafe.size(), tamanhod = dieta.size(), tamanhoa = almoco.size();

        for(cont = 0; cont < tamanhoc; cont++) {
            int contar = 0, pos = 0;
            for(cont2 = 0; cont2 < tamanhod; cont2++) {

                if(dieta[cont2] == cafe[cont]) {
                    dieta.erase(dieta.begin() + cont2);
                    std::size_t found = verifica.find(cafe[cont]);
                    if( found!=std::string::npos ) {
                        repete = true;
                        break;
                    }
                    verifica.push_back(cafe[cont]);
                    tem = true;
                }

            }

            if(!tem || repete) {
                dieta = "CHEATER";
                break;
            }
        }

        if(tem){

            tem = false;
            repete = false;

            for(cont = 0; cont < tamanhoa; cont++) {
                int contar = 0;
                for(cont2 = 0; cont2 < dieta.size(); cont2++) {

                    if(dieta[cont2] == almoco[cont]) {
                        dieta.erase( dieta.begin() + cont2);
                        std::size_t found = verifica.find(almoco[cont]);
                        if(found!=std::string::npos) {
                            repete = true;
                            break;
                        }
                        verifica.push_back(almoco[cont]);
                        tem = true;
                    }
                }
                if(!tem || repete) {
                    dieta = "CHEATER";
                    break;
                }
            }
        }

        if(tem || (almoco.size() == 0) || (cafe.size() == 0)){
            sort(dieta.begin(), dieta.end());
        }

        cout << dieta << endl;

    }

    return 0;
}
