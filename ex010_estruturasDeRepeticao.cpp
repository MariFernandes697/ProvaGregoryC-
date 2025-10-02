#include <iostream>
using namespace std;

//Estruturas de Repetição
//contadores
int main(){

    int cont = 1;
    while(cont <= 10){
        cout << cont << endl;
        cont++;
    }
    //Prática 3.1 - Desenvolver um programa em C++ que mostre todos os números no intervalo de 0 a 100.
    int numeros = 0;
    while(numeros <= 100){
        cout << numeros << " ";
        numeros++;
    }
    cout << endl;
    //Números Positivos |  Beecrowd 1060

    //Versão com while
    float numeros1;
    int cont2, cont_positivos;
    cont2 = cont_positivos = 0;

    while (cont2 < 6){
        cin >> numeros1;
        if (numeros1 > 0){
              cont_positivos++;
        }
      cont2++;
    }

    cout << cont_positivos << " valores positivos\n";

    //Versão com for

    float valor;
    int contador = 0;
    for (int i = 0; i < 6 ; i++){
        cin >> valor;
        if(valor > 0){
            contador++;
            }
    }
    cout << contador << " valores positivos\n";
    //Prática 3.3
    //Do while
    int cont1 = 0;
    do{
        cout << "Contador: " << cont1 << endl;
        cont1++;
    }
    while(cont1 <= 100);


    //Números Ímpares até 100
    for(int i = 1; i <= 100; i+= 2){
        cout << i << " ";
    }

return 0;
}
