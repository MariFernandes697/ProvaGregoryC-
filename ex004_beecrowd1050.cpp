#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    //DDD - Beecrowd 1050
  int ddd;
  string cidades;
  cin >> ddd;

  switch(ddd){
    case 61:
        cidades = "Brasilia";
        break;
    case 71:
        cidades = "Salvador";
        break;
    case 11:
        cidades = "Sao Paulo";
        break;
    case 21:
        cidades = "Rio de Janeiro";
        break;
    case 32:
        cidades = "Juiz de Fora";
        break;
    case 19:
        cidades = "Campinas";
        break;
    case 27:
        cidades = "Vitoria";
        break;
    case 31:
        cidades = "Belo Horizonte";
        break;
    default:
        cout << "DDD não cadastrado\n";
        }
    cout << cidades;
return 0;
}

