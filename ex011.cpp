#include <iostream>
using namespace std;

//Beecrowd 1065;
//Pares entre 5 números;
int main(){
    int valores[5], pares = 0;
    for(int i = 1; i <= 5; i++){
        cin >> valores[i];
        if (valores[i] % 2 == 0){
            pares++;
        }
    }
    cout << pares << " valores pares\n";
return 0;
}
