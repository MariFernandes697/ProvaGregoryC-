#include <iostream>
using namespace std;

int main(){
  //Beecrowd 1035
  //Teste de Seleção


   //Beecrowd 1041
   //Coordenadas de um ponto
   float x, y;
   cin >> x >> y;

   if ( x != 0 && y !=0){
        if(x > 0 && y > 0){
            cout << "Q1";
        }
        else if(x > 0 && y < 0){
            cout << "Q4";
        }
        else if(x < 0 && y > 0){
            cout << "Q2";
        }
        else{
            cout << "Q3";
        }
   }
   else{
    cout << "Origem";
   }
return 0;
}

