#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //Exercício de ordenação de forma iniciante;
    int n1, n2, n3, maior, menor, meio;
    cin >> n1 >> n2 >> n3;

    if(n1 > n2 && n1 > n3){
        maior = n1;
        if (n2 > n3){
            meio = n2;
            menor = n3;
        }
        else{
            meio = n3;
            menor = n2;
        }
    }
    else if(n2 > n1 && n2 > n3){
        maior = n2;
        if (n1 > n3){
            meio = n1;
            menor = n3;
        }
        else{
            meio = n3;
            menor = n1;
        }
    }
    else{
        maior = n3;
        if (n1 > n2){
            meio = n1;
            menor = n2;
        }
        else{
            meio = n2;
            menor = n1;
        }
    }
    cout << menor << endl << meio << endl << maior << endl << endl;
    cout << n1 << endl << n2 << endl << n3 << endl;

    //Exercício de ordenação da maneira mais eficiente
    //Utiliza da função sort da biblioteca <algoritm>
    //A função sort faz a ordenação das variáveis quando armazenadas em um array

    //Ex:
    int numeros[3] = {n1, n2, n3};//Define os valores do array
    sort(numeros, numeros + 3);
    // Na chamada da função, devemos passar dois argumentos, O primeiro argumento é onde começa (o início do array)
    // O segundo é onde termina (início do array + tamanho dele)

    for (int i = 0; i < 3; i++){
        cout << numeros[i]<< endl;
    }
    cout << endl;
    cout << n1 << endl << n2 << endl << n3 << endl;
return 0;
}
