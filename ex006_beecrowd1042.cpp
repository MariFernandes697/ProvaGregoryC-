#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //Exerc�cio de ordena��o de forma iniciante;
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

    //Exerc�cio de ordena��o da maneira mais eficiente
    //Utiliza da fun��o sort da biblioteca <algoritm>
    //A fun��o sort faz a ordena��o das vari�veis quando armazenadas em um array

    //Ex:
    int numeros[3] = {n1, n2, n3};//Define os valores do array
    sort(numeros, numeros + 3);
    // Na chamada da fun��o, devemos passar dois argumentos, O primeiro argumento � onde come�a (o in�cio do array)
    // O segundo � onde termina (in�cio do array + tamanho dele)

    for (int i = 0; i < 3; i++){
        cout << numeros[i]<< endl;
    }
    cout << endl;
    cout << n1 << endl << n2 << endl << n3 << endl;
return 0;
}
