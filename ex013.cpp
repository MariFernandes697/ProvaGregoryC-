#include <iostream>
using namespace std;

//Tabuada
int main(){
    //Vers�o while
    int n, i = 1, tabuada;
    //Aqui a vari�vel i est� fora do loop, ent�o pode ser acessada em qualquer comando.
    cin >> n;
    while(i <= 10){
        tabuada = n * i;
        cout << n << " x " << i << " = " << tabuada << endl;
        i++;
    }
    //Vers�o for
    cin >> n;
    for (int i = 0 ; i <= 10; i++){
            //aqui a vari�vel i est� declarada dentro do loop, s� podendo ser acessada dentro dele
        tabuada = n * i;
        cout << n << " x " << i << " = " << tabuada << endl;
    }

return 0;
}
