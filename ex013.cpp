#include <iostream>
using namespace std;

//Tabuada
int main(){
    //Versão while
    int n, i = 1, tabuada;
    //Aqui a variável i está fora do loop, então pode ser acessada em qualquer comando.
    cin >> n;
    while(i <= 10){
        tabuada = n * i;
        cout << n << " x " << i << " = " << tabuada << endl;
        i++;
    }
    //Versão for
    cin >> n;
    for (int i = 0 ; i <= 10; i++){
            //aqui a variável i está declarada dentro do loop, só podendo ser acessada dentro dele
        tabuada = n * i;
        cout << n << " x " << i << " = " << tabuada << endl;
    }

return 0;
}
